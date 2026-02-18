## LDR Light Sensor using Arduino

### Objective
To understand analog input reading using an LDR and voltage divider circuit.

### Components Used
- Arduino Uno
- LDR
- 10kΩ resistor
- LED
- 220Ω resistor
- Breadboard and jumper wires

### Circuit Description
The LDR and a fixed resistor form a voltage divider. The midpoint voltage
is read using analog pin A0. The LED turns ON when light intensity falls
below a defined threshold.

### Working
- Bright light → higher analog value → LED OFF
- Low light → lower analog value → LED ON

### What I Learned
- Difference between analog and digital signals
- How voltage dividers work
- How analogRead() maps voltage to values (0–1023)
