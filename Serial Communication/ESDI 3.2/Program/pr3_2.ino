void setup() {
  for(int i = 8; i < 12; i++) {
    pinMode(i, OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char data = Serial.read();
    if(isdigit(data)) PORTB = int(data - '0');
  }
}

