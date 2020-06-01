#define MP 1
#define MN 0
#define Switch 2

void setup() {
  pinMode(MP, OUTPUT);
  pinMode(MN, OUTPUT);
  pinMode(Switch, INPUT);
}

void loop() {
  digitalWrite(MP, !digitalRead(Switch));
  digitalWrite(MN, digitalRead(Switch));
}
