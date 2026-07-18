
## Tinkercad Project

Project Link:
https://www.tinkercad.com/things/8qy5dyxffGD-four-servo-motors-sweep

# Arduino Servo Motor Project

## Project Description

This project was completed using Arduino Uno and four servo motors in Tinkercad. The main objective was to control all four servo motors at the same time using the Servo library and a simple Arduino program.

At the beginning of the simulation, all servo motors perform a sweep movement together. After completing the movement, they stop and hold their position at 90 degrees as required. The project demonstrates how multiple servo motors can be controlled simultaneously by assigning each motor to a different digital pin.

## Components Used

- Arduino Uno
- 4 Servo Motors
- Jumper Wires

## Circuit Connections

Each servo motor is connected to a separate digital pin on the Arduino board:

- Servo 1 → Digital Pin 9
- Servo 2 → Digital Pin 10
- Servo 3 → Digital Pin 11
- Servo 4 → Digital Pin 12

All servo motors share the same power connections:
- VCC → 5V
- GND → GND

The circuit was built without using a breadboard. All connections were made directly between the Arduino Uno and the servo motors.

## Program Overview

The program starts by attaching each servo motor to its assigned digital pin. Inside the loop, all four motors move together from 0° to 180° and then back to 0° to create the sweep motion. After the sweep is completed, the motors are set to 90° and remain in that position.

## Learning Outcome

This project helped me understand how to:
- Connect and control multiple servo motors using Arduino.
- Use the Servo library in Arduino.
- Assign different digital pins to multiple devices.
- Synchronize the movement of several servo motors with the same program.
- Build and test an Arduino circuit using Tinkercad simulation.

## Result

The project was successfully completed. All four servo motors move together during the sweep motion and then stop at a fixed position of 90 degrees, meeting the required task specifications.
