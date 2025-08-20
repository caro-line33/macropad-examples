void setup() {
  pinMode(17, OUTPUT); // TX (left side) LED 
  pinMode(30, OUTPUT); // RX (right side) LED
}

void loop() {
  digitalWrite(17, HIGH); // turn TX LED on
  digitalWrite(30, LOW); // turn RX LED off
  delay(500); // wait 500 ms
  digitalWrite(17, LOW); // turn TX LED off
  digitalWrite(30, HIGH); // turn RX LED on
  delay(500); // wait 500 ms
}

