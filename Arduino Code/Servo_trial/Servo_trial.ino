//a servo motor takes values from 0 to 180, representing its degrees of rotation
#include <Servo.h>

Servo myServo;

//set all of your variables here:
//motor speed:
int spd = 50;
//delay time:
int pause = 5000;
//integer to store incoming Serial data
int incomingByte;

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
