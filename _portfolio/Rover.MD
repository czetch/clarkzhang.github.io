---
title: "Mechatronics Rover"
excerpt: "WiFi-Controlled 3-Wheel Cart"
header:
  image: /assets/img/pliersV1.png
  teaser: /assets/img/pliersV2.png
gallery:
  - image_path: assets/img/pliers.gif
    alt: 'Pliers First Draft in Action'

---

# Introduction

This WiFi-controlled three-wheel rover with a carrying capacity of 130 square inches is created as the Final Project for ME3204 Mechatronics. The rover is mobilized by torque vectoring the front wheels, allowing for speed, direction, and steering control. The motors are controlled via the Blynk app on the user’s phone, which send signals to the Blynk server, which is accessed by a WiFi module wired to an Arduino. Finally, a magnetometer reads the rover’s heading, and a red LED lights up when the rover faces north.  

This rover is designed as a half scale model. The full scale rover can be found [here](https://a360.co/3JngeiY), and is meant to can carry heavy toolboxes and a fire extinguisher between events at the Formula SAE competition. However, since there is a low budget for this project, the motors required for carrying ~100 lbs of gear could not be sourced.  

#	System Components

The materials required for building the rover are detailed in the Appendix, A1. The project can be divided into two sections that were constructed in parallel: mechanical and electrical.  

##	Mechanical

The mechanical section is divided into three parts: frame, motor housing, and wheels.
The drive wheels for the full-scale model were chosen to be 8” diameter wheels, which would give the rover enough ground clearance to cross rough terrain with ease, such as speed bumps, which are about 3-4” in height. For the half-scale model, the wheels were scaled down to 6” in diameter. To ensure the storage bed would be level, a 4” caster wheel will be attached to the back of the rover. The 6” wheels cannot directly interface with a motor and wheel hubs needed to be designed. The hubs were designed to bolt onto the wheel and interface with Pololu 1083 Universal Aluminum hubs for 6 mm D-shafts. The hubs were SLA printed in High Temp resin, but can be printed in ABS or any other engineering plastic. The wheel hubs can be found here.  

The motors chosen for this project are Greartisan DC 12V Geared motors from Amazon. They were chosen for their high torque to price ratio, and came in a variety of max speeds. The 150 RPM model was chosen since 6” wheels rotating at 150 RPM corresponds to a maximum speed of 2.67 mph. This speed is comparable to human walking speeds, and ensures that the rover cannot travel far from the user if it becomes stuck in the drive mode.
To mount the motors to the frame, a motor mount is designed to fit snuggly around the motor and fix it in place by using the bolt circle on the motor housing. The motor mounts were printed with SLA printed in High Temp resin, but can be printed in ABS or any other engineering plastic. The motors are mounted to the motor mounts with 6X #4 x 0.5” bolts. The motor mount can be found here.
The wheels are bolted to the wheel hubs using 3X 0.25”x1” bolts. The SLA hubs are bolted to the aluminum hubs with 3X #4 x 0.5” bolts. The aluminum hubs are secured to the motor shaft with two 4-40 set screws. The motor shafts were sanded so the set screws have better contact with the shafts. Thread locker is used to secure the set screws and wheel hub bolts.
The frame is made of 1x3 planks and 1/8” MDF boards, both which can be cheaply sourced from on campus makerspaces and local wood shops. Cut the following pieces:  

-	4X 12.875”
-	3X 6.875”
-	1X 11.625”
-	6X 6”

A Kreg system is used to join the 1x3 planks together. Assemble the base boards by using two 12.875” pieces and equally spacing three 6.875” pieces. The walls of the frame are built by using one 12.875” piece and equally spacing three 6” pieces onto it. A strip of MDF is screwed onto the top of each wall for stabilization. The walls are then joined to the base boards, and a large rectangle of MDF is cut out to line the storage bed. The motor mounts are screwed into either side of the front of the rover. The caster wheel is screwed into the back of the rover.  

##	Electrical

A schematic diagram of the electronics can be found in the Appendix, A2. The heart of the rover is an Arduino UNO R3. It was chosen for its availability on the market and writability. The motor driver is a L298n module. It was chosen because it is designed for 12V motors, can control two motors at once, and has built in logic gates to prevent short circuits. An ESP8266 WiFi module is used to connect the Arduino to the internet, chosen for its documentation on interfacing with Arduino. A QMC5883L module is used to measure the rover’s heading, and was chosen for its price and accuracy.  

The Blynk app was chosen to be the controlling device because it allows users to control the rover straight from their phones. Users can customize the rover control board in the app. User inputs sent through app are stored in the Blynk cloud. Using the WiFi module, the Arduino can connect to the Blynk cloud and receive the user inputs.  

Thus, there are several steps to ensure this connectivity coded correctly. Refer to this video for properly configuring the ESP8266 module and setting up the Blynk code. Once connectivity is set up, a Blynk template needs to be set up with the datastreams shown in the Appendix along with the complete Arduino code, A3-4.  

The motor control is coded very similarly to in Lab 4. Each motor is controlled by turning on and off opposing sides of an H-bridge to control motor direction. Speed control is obtained by using hard-switching PWM. The PWM signal is sent to the enable pin on the motor controlled which is sent to both the low side and high side of the H-bridge using a set of logic gates. Steering control is obtained by using torque vectoring. Since the motors used are cheap, their build quality is not consistent; two motors may have different speeds at the same voltage. This can be tuned by adjusting each motor’s PWM mapping values in the code.   

The compass module reads signals from the onboard magnetometer and sends the signals with I2C. To communicate with the module, the Wire package was used to decode the signals. The module has some noise so the average of twenty samples is taken to be the true heading of the rover. The heading value is coded to stay between 0 and 359 degrees, with 0 indicating north. A red LED is commanded to turn on when the rover faces north.  

To power the system, a 6000mAh 11.1 V LiPo battery is used. A main power switch is connected in series with the hot wire from the LiPo. The L298n module has a 12V to 5V converter that is used to power the Arduino.  

Finally, a rugged box is printed from PLA to house the electronics.  

#		System Complexity

Frame Construction – The frame needed to be built with sturdy construction to hold the system together. A 1x3 board is not a standard board size, so several experiments were conducted to determine if pocket holes were viable for joining boards.

Custom Printed Components – To attach the motor and wheels, custom components needed to be designed to securely mount all the moving components. Since the motor and wheel are under significant load and require tight tolerances for smooth operation, the components were designed with load transfer and 3D-printing in mind.

Blynk & WiFi – Working with an entirely new control scheme presented challenges for coding. There is not much documentation on controlling an Arduino with a phone; much experimentation was required to ensure the control scheme to work correctly.

Motor Control – Determining the right motors to use given the loads the rover would experience required some digging through on-campus and online sources. Finding the best way to control the motors required analyzing the module diagrams. Furthermore, tuning the motors to rotate at the same speeds given a single motor input took much experimentation.

Compass Module – This is a new sensor that is not covered in class, and communicates with a new signal protocol. Calibrating and coding the sensor values took several tries before the Arduino could detect north consistently.

Aesthetics – There are only two sets of wires that are visible to the user during normal operation. This gives the rover an elegant look. Much effort was put into making a box that was large enough to house all the electronics and small enough to not take up too much of the storage bed.

# Media

{% include gallery caption="Pliers First Draft in Action, Pliers First Draft, and Pliers Final Version." %}
