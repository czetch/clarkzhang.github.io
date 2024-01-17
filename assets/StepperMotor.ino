#include <AccelStepper.h>

AccelStepper stepper(AccelStepper::DRIVER, 3, 2);

// 10 mL syringe: 14.5 mm ID
// 20 mL syringe: 19.3 mm ID
const int SYRINGE_DIAMETER = 14.5;

const int MICROSTEP_FACTOR = 16;
const int FULL_STEP_PER_REV = 200;
const int SCREW_LEAD = 2;
const float STEPS_PER_MM = FULL_STEP_PER_REV * MICROSTEP_FACTOR / SCREW_LEAD;
const float SYRINGE_AREA = PI/4 * sq(SYRINGE_DIAMETER);
const unsigned long REFRESH_INTERVAL = 1000;
unsigned long lastRefreshTime = 0;
float linear_speed, flow_rate;

const int green[3] = {0, 255, 0};
const int yellow[3] = {255, 100, 0};
const int red[3] = {255, 0, 0};
bool extrude = true;

// 14 - A0 
// 15 - A1 
// 16 - A2 
// 17 - A3 
// 18 - A4 
// 19 - A5
const int cw_button_pin = A0;
const int ccw_button_pin = A1;
const int potentiometer_pin = A2;
const int pause_button_pin = A5; 
const int limit_switch_pin = 7;
const int red_LED = 9;
const int green_LED = 10;
const int blue_LED = 11;

void set_color_mode(const int modes[3]) {
  analogWrite(red_LED, modes[0]);
  analogWrite(green_LED, modes[1]);
  analogWrite(blue_LED, modes[2]);
}

void setup()
{
  // initialize serial
  Serial.begin(9600);

  // motor setup
  stepper.setMaxSpeed(1000);
  stepper.setAcceleration(200.0);

  // led pin setup
  pinMode(red_LED, OUTPUT);
  pinMode(green_LED, OUTPUT);
  pinMode(blue_LED, OUTPUT);

  // control pin setup
  pinMode(pause_button_pin, INPUT_PULLUP);
  pinMode(cw_button_pin , INPUT_PULLUP);
  pinMode(ccw_button_pin, INPUT_PULLUP);
  pinMode(potentiometer_pin , INPUT_PULLUP);
  pinMode(limit_switch_pin, INPUT_PULLUP);
}

void loop() {

  // Extruder Direction
  // Reads the CW and CCW momentary buttons and 
  // determines if the screw extrudes or retracts
  if(analogRead(cw_button_pin) < 512) {
    extrude = false;
  } 
  if (analogRead(ccw_button_pin) < 512) {
    extrude = true;
  }


  // Determines Speed
  // Reads value from potetiometer (0V-5V) and converts to 10 bit binary
  // Binary count is scaled down to 0-1000 to account for maximum motor speed
  // Lower values are forced to zero for a clear stopping point
  // Then, the motor speed is set based on the motor direction
  int speed = analogRead(potentiometer_pin)*0.9766;
  if(speed < 15){
    speed = 0;
  }
  if(extrude) {
    stepper.setSpeed(speed);
  } else {
    stepper.setSpeed(-speed);
  }

  // Calculate and Print Flow Rate every second
  if(millis() - lastRefreshTime >= REFRESH_INTERVAL){
    linear_speed = speed / STEPS_PER_MM;
    flow_rate = linear_speed * SYRINGE_AREA / 1000 * 60;
    lastRefreshTime += REFRESH_INTERVAL;
    Serial.println("\n" + String(linear_speed) + " mm/s, " + String(flow_rate) + " mL/min");
  }

  // Handles limit switch 
  // Limit switch is default HIGH, changes to LOW when pressed
  // If the depressed, the motor stops and LED turns red
  //    Unless the motor is retracting, which is allowed
  // If undepressed, the motor runs if the pause button is open
  //    otherwise, the motor is paused
  if(digitalRead(limit_switch_pin) == LOW){
    set_color_mode(red);
    
    //allows retraction at zero limit
    if(extrude && analogRead(pause_button_pin) < 512){
      stepper.runSpeed();
    }
  } else{
    //if pause button is open, then motor stops running
    if (analogRead(pause_button_pin) > 512) {
      set_color_mode(yellow);
    } else {
      set_color_mode(green);
      stepper.runSpeed();
    }
  }
}
