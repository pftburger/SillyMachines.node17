//BUTTON
//set all your variables here:
// set pin numbers:
const int buttonPin = D3;     

// variables will change:
int buttonState = 0;        

void setup() {
  Serial.begin(250000);
  Serial.println("System Online");
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    Serial.println("press the button");
  } else {
    // turn LED off:
    Serial.println("dont press the button");
  }
}
