//a servo motor takes values from 0 to 180, representing its degrees of rotation
//in this sketch your servo will move to positions 0, 90 and 180 with an interval of 500 miliseconds inbetween
//make sure you are connecting your servo to pins 5v(red cable), G (brown or black cable), D1. You could connect multiple servos to your board, on all of the D pins
#include <Servo.h>

Servo myServo;

//set all of your variables here:
//motor speed:
int spd = 50;
//delay time:
int pause = 5000;
//integer to store incoming Serial data
int incomingByte;
//define which pin your servo is connected to
int servoPin = D1;

//________________SETUP_______________________________
void setup() {
  // put your setup code here, to run once:
  Serial.begin(250000);
  Serial.println("System Online");
  myServo.attach(servoPin);
}
//________________LOOP________________________________
// put your main code here, to run repeatedly:
void loop() {
  myServo.write(0);
  delay(500);
  myServo.write(90);
  delay(500);
  myServo.write(180);
  delay(500);
  myServo.write(90);
  delay(500);
}
