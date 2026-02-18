int buttonPin = 2;
int ledPin = 13;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);   // start serial communication
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  // Print raw button state
  Serial.print("Button state: ");
  Serial.println(buttonState);

  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);
    Serial.println("LED ON");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("LED OFF");
  }

  Serial.println("----");
  delay(500);
}
