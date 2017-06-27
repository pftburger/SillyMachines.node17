//BUTTON
//set all your variables here:
// set pin numbers:
const int buttonPin = D3;   //the button shield is built in a way that its always D3 pin 

// variables will change:
int buttonState = 0;        

void setup() {
  Serial.begin(250000);
  Serial.println("System Online");
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("press the button");
  } else {
    // turn LED off:
    digitalWrite(LED_BUILTIN, LOW); 
    Serial.println("dont press the button");
  }
}
