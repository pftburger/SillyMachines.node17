// Dim an LED using a PWM pin
//int PWMpin = 10; // LED in series with 470 ohm resistor on pin 10

void setup()
{
  // no setup needed
}

void loop()
{
   for (int i=0; i <= 255; i++){
      analogWrite(LED_BUILTIN, i);
      delay(10);
   } 
}
