\\

#include <IRremote.h> // add IR remote library
#include <Servo.h> // add servo motor library
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo myservo;
Servo a;
int IRpin = 2;   // pin for the IR sensor
int motor_angle = 0;
IRrecv irrecv(IRpin);
decode_results results;
void setup()
{
  Serial.begin(9600); // initialize serial communication
  Serial.println("IR Remote controlled servo motor"); // display message
  irrecv.enableIRIn();  // Start the receiver
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  servo4.attach(12);
  
  servo1.write(motor_angle);
  delay(1000);
  servo2.write(motor_angle);
  delay(1000);
  servo3.write(motor_angle);
  delay(1000);
  servo4.write(motor_angle);
  delay(1000);
  Serial.println("Servo motor angle 0 deg");
  delay(500);
}
void loop()
{


  while (!(irrecv.decode(&results))); // wait until no button is pressed
  if (irrecv.decode(&results)) // when button is pressed and code is received
  {
    switch (results.value) {
      case 3772784863:
        a = servo1;
        break;
      case 3772817503:
        a = servo2;
        break;
      case 3772801183:
        a = servo3;
        break;
      case 3772780783:
        a = servo4;
        break;





    }

    if (results.value == 3772811383) // 0
    {
      Serial.println("servo motor angle 0 deg");
      motor_angle = 0;
      a.write(motor_angle);
      delay(1000);
      // move the motor to 30 deg
    }
    else if (results.value == 3772793023) // pow
    {
      Serial.println("servo motor angle 0 deg");
      motor_angle = 0;
      servo1.write(motor_angle);
      delay(1000);
      servo2.write(motor_angle);
      delay(1000);
      servo3.write(motor_angle);
      delay(1000);
      servo4.write(motor_angle);
      delay(1000);

      // move the motor to 30 deg
    }
    else if (results.value == 3772813423) // 5
    {
      Serial.println("servo motor angle 30 deg");
      motor_angle = 30;
      a.write(motor_angle);
      delay(1000);
    }
    else if (results.value == 3772797103) // 6
    {
      Serial.println("servo motor angle 60 deg");
      motor_angle = 60;
      a.write(motor_angle);
      delay(1000);
    }
    else if (results.value == 3772788943) //7
    {
      Serial.println("servo motor angle 90 deg");
      motor_angle = 90;
      a.write(motor_angle);
      delay(1000);
    }
    else if (results.value == 3772821583) //8
    {
      Serial.println("servo motor angle 120 deg");
      motor_angle = 120;
      a.write(motor_angle);
      delay(1000);
    }

    else if (results.value == 3772805263) //9
    {
      Serial.println("servo motor angle 150 deg");
      motor_angle = 150;
      a.write(motor_angle);
      delay(1000);
    }
    else if (results.value == 3772778233) //up
    {
      if (motor_angle < 180) motor_angle += 3; // increase motor angle
      Serial.print("Motor angle is ");
      Serial.println(motor_angle);
      a.write(motor_angle);
      delay(100);         // and move the motor to that angle
    }
    else if (results.value == 3772810873) //down
    {
      if (motor_angle > 0) motor_angle -= 3; // decrease motor angle
      Serial.print("Motor angle is ");
      Serial.println(motor_angle);
      a.write(motor_angle);
      delay(100);     // and move the motor to that angle
    }
    else if (results.value == 3772794553) //right
    {
      if (motor_angle < 150) motor_angle += 25; // increase motor angle
      Serial.print("Motor angle is ");
      Serial.println(motor_angle);
      a.write(motor_angle);
      delay(100);         // and move the motor to that angle
    }
    else if (results.value == 3772819033) //left
    {
      if (motor_angle > 25) motor_angle -= 25; // decrease motor angle
      Serial.print("Motor angle is ");
      Serial.println(motor_angle);
      a.write(motor_angle);
      delay(100);     // and move the motor to that angle
    }
    delay(200);      // wait for 0.2 sec
    irrecv.resume();     // again be ready to receive next code
  }
}
