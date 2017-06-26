#include "WEMOS_Motor.h"

//set all of your variables here:
//motor speed:
int spd = 50;
//delay time:
int pause = 500;

//Motor shiled I2C Address: 0x30
//PWM frequency: 1000Hz(1kHz)
Motor M1(0x30,_MOTOR_A, 1000);//Motor A
Motor M2(0x30,_MOTOR_B, 1000);//Motor B


//________________SETUP_______________________________
void setup() {
  // put your setup code here, to run once:
  Serial.begin(250000);
}
//________________LOOP________________________________
// put your main code here, to run repeatedly:
void loop() {
  
  M1.setmotor(_CW, spd);
  delay(pause);
  M1.setmotor(_CCW, spd);
  delay(pause);
  M1.setmotor(_STOP);
  delay(pause);
}
