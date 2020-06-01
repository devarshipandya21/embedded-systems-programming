#define SW1 9

void setup() {
  pinMode(SW1, INPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(SW1)) {
    Serial.println("Good Morning");
  } else {
    Serial.println("Bad Morning");
  }
}

