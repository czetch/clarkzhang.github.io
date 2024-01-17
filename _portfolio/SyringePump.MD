---
title: "High Accuracy 3D-Printed Syringe Pump"
excerpt: "Printed in ABS, using COTS Parts, powered by Arduino"
header:
  image: /assets/img/Syringe_banner.png
  teaser: /assets/img/Syringe_teaser.png
   
---

# Features

* **Compatible with 10 mL and 20 mL syringes** Press-fits incorporated at the finger holds and plunger for easy insertion and removal. Rubber bands can be attached to secure the syringe if the press-fits loosen.
* **Adjustable Speed and Direction** The speed and direction of the pump can vary from 0.0006 mm/s to 0.62 mm/s by using momentary buttons and a potentiometer. The pump automatically stops at the limits of motion and prevents the carraige from crashing into the end supports.
* **High Precision and Repeatability** The pump is driven by a Nema 17 stepper motor with 1/16 microstepping using a 2 mm lead screw, and calibrated using a limited switch.

# Operating Instructions

The power supply must be connected to a standard 120 V wall socket, and the Arduino UNO circuit must be connected through USB cable to a computer running the full program ([link to Arduino code](/assets/StepperMotor.ino)). When loading a new syringe into the pump, enter the corresponding syringe diameter into the program by changing the global variable SYRINGE_DIAMETER, and reupload the program to the Arduino.

Press the power button. The LED will flash green, indicating the motor is running, and the motor will start dispensing liquid at the determined flow rate. To pause the motor, press the second rightmost button. The motor will pause, and the LED will signify this by flashing yellow. Press the same button again to resume motor activity. To change the flow rate, turn the potentiometer left (counter-clockwise) to lower the flow rate, and right (clockwise) to raise it. When the syringe is out of liquid, the carriage will hit the limit switch and automatically stop the motor. This will be indicated by a red LED, and will also cause the motor to stop extruding for the program;s duration. In this stopped state, the pump can be retracted to reset the pump by using the two leftmost momentary buttons, which move the carriage backwards or forwards respectively.

# CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e0aae7b5c4c72c0b1?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Parts Required


| COTS Part                                                            | Quantity |
|----------------------------------------------------------------------|----------|
| 250 mm lead screw with 2 mm pitch and 2 mm lead                      | 1        |
| 1/4" x 8mm Flexible Coupling                                         | 1        |
| 200 mm linear rod with 8 mm diameter                                 | 1        |
| LM8UU Linear bearing for 8 mm diameter rod                           | 2        |
| 2040 Aluminum Extrusion 1' Length                                    | 1        |
| Nema 17 Stepper Motor                                                | 1        |
| MEAN WELL RQ-65D AC-DC Power Supply Quad Output 5V 12V 24V 12V 4 Amp | 1        |
| Arduino Uno                                                          | 1        |
| A4988 Stepper Driver                                                 | 1        |
| Small Breadboard                                                     | 1        |
| Panel Mount Latching Push Buttons                                    | 2        |
| Panel Mount Momentary Push Buttons                                   | 2        |
| Limit Switch                                                         | 1        |
| RGB Common Cathode LED                                               | 1        |

| Custom 3D-Printed Part | Quantity |
|------------------------|----------|
| Motor Housing          | 1        |
| Carraige               | 1        |
| End Support            | 1        |
| Barrel Support         | 1        |
| Screw Cover            | 1        |
| Enclosure Base         | 1        |
| Control Panel Wall     | 1        |
| Logo Wall              | 1        |
| Top Cover              | 1        |
