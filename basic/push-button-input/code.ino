int buttonPin = 2;   // Push button connected to D2
int ledPin = 13;     // LED connected to D13

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // enable internal pull-up
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  // With INPUT_PULLUP:
  // LOW  = button pressed
  // HIGH = button released
  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);   // turn LED ON
  } else {
    digitalWrite(ledPin, LOW);    // turn LED OFF
  }
}
