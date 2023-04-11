
## Automobile Safety System
The main objective of this project is to reduce the occurrence of Vehicle
accidents and its consequences. Our advanced system will ensure the safety of
the passenger’s by detecting impending collisions and alert drivers. The
project aims at detecting the obstacles in front of the vehicle. This project will
also include an anti-sleeping alarm system for the drivers, which will detect
drowsiness and will have an alert system on it.
## Features

- Obstacle Detection: For the microcontroller we are using      Arduino UNO, Using the ultraSonic sensor we are detecting the obstacles within a certain range of distance(cm) . We are using two Generic LEDs (One green and one Red). One Buzzer for the alert system. As this is a prototype version, we are doing all the measurements according to the ratio of the project's Plastic board.
    - Safe Zone: When there are any obstacles greater than 35 cm, the LED green light will stay on and the buzzer will stay in the noTone mode.
    - Warning Zone: When any obstacles come within the range of 35 cm and 19 cm, the red led will blink with a delay of 1 sec as well as the buzzer will be in the tone mode and we will hear the buzzer sound with a delay of 1 sec.
    - Danger Zone: When obstacles come under the range of 19 cm, the red light will stay on and the buzzer with buzz continuously with less delay.

- Drowsiness Detection: We are using Arduino UNO as a common microcontroller for both the systems of our project. As we know the IR sensor radiates a infrared wave and by receiving the wave we know if there are any obstacles in front of it. We also know that the infrared wave does not reflect back through the black surface. Using this concept we implemented it in our automobile safety system as a drowsiness detection system. We implemented the IR sensor in a Glass frame and also put a buzzer on it as an alert system.
    - When the Driver’s eyes are in normal state, the infrared wave does not reflect back and the sensor does not detect any obstacles. But when the driver’s eyes stay close for more than 2 sec, the IR is going to detect the eye lid as an obstacle and the buzzer will turn on, detecting the driver’s Drowsiness and alert him.


## Hardware Requirements

These following parts and tools are required for building this project
- Arduino Uno
- Ultrasonic sensor HR SC-04
- LED (Generic)
- Buzzer
- Connecting Wires
- Battery 8V, 3.7V
- Plastic Board
- IR Sensor
- Resistor 4.75k ohm
- 2 Toy car
- Glass Frame
- Hot Glue gun
- Double sided tape


    