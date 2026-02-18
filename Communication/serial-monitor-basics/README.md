## Serial Monitor Basics with Push Button

### Objective
To understand how to use the Serial Monitor for debugging digital inputs.

### Components Used
- Arduino Uno
- Push button
- LED
- 220Ω resistor
- Breadboard and jumper wires

### Working
The button state is read using a digital input pin configured with
INPUT_PULLUP. The state is printed to the Serial Monitor, and the LED
turns ON when the button is pressed.

### What I Learned
- How Serial.begin() and Serial.println() work
- How to debug hardware using serial output
- Relationship between button state and program logic
