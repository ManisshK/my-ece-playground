int ldrPin = A0;      // Analog pin
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldrPin);

  Serial.print("LDR value: ");
  Serial.println(ldrValue);

  // Adjust this threshold based on your room lighting
  if (ldrValue < 400) {      // dark
    digitalWrite(ledPin, HIGH);
  } else {                   // bright
    digitalWrite(ledPin, LOW);
  }

  delay(500);
}
