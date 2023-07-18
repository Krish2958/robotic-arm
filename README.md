**README.md**

# Robotic Arm Control using Arduino Uno

This project demonstrates how to control a robotic arm using an Arduino Uno and an IR remote. The robotic arm consists of four servo motors that control different joints to move the arm in different directions. The IR remote allows the user to control the movement of the arm remotely.

## Dependencies

- `IRremote` library: This library is used to interface with the IR sensor and receive commands from the IR remote.

- `Servo` library: This library is used to control the servo motors connected to the Arduino Uno.

## Hardware Setup

1. Connect the IR sensor to pin 2 of the Arduino Uno.

2. Connect four servo motors to the following pins of the Arduino Uno:
   - Servo 1: Pin 9
   - Servo 2: Pin 10
   - Servo 3: Pin 11
   - Servo 4: Pin 12

3. Make sure the servo motors are powered properly and mechanically connected to the robotic arm.

## Usage

1. Upload the provided `.ino` file to your Arduino Uno board using the Arduino IDE.

2. Once the code is uploaded, open the Serial Monitor to view the initialization message.

3. Use the IR remote to control the robotic arm:
   - Press buttons 1, 2, 3, or 4 on the IR remote to select which servo motor to control.
   - Use buttons 0, 5, 6, 7, 8, or 9 to move the selected servo motor to specific angles.

   Button Mapping:
   - 0: Set the selected servo motor to 0 degrees.
   - 5: Set the selected servo motor to 30 degrees.
   - 6: Set the selected servo motor to 60 degrees.
   - 7: Set the selected servo motor to 90 degrees.
   - 8: Set the selected servo motor to 120 degrees.
   - 9: Set the selected servo motor to 150 degrees.
   - Up Arrow: Increment the selected servo motor angle by 3 degrees.
   - Down Arrow: Decrement the selected servo motor angle by 3 degrees.
   - Right Arrow: Increment the selected servo motor angle by 25 degrees.
   - Left Arrow: Decrement the selected servo motor angle by 25 degrees.

4. The Serial Monitor will display the current angle of the selected servo motor after each movement.

## Note

Ensure that the servo motors are properly powered and have enough torque to move the robotic arm. Adjust the delays in the code to control the speed and smoothness of the movements.

Feel free to modify the code and the hardware setup according to your specific robotic arm design and requirements. Enjoy experimenting with your robotic arm!
