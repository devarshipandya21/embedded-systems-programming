#define mp 3
#define mn 5
void setup() {
  // put your setup code here, to run once:
  pinMode(mp,OUTPUT);
  pinMode(mn,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=255;i>0;i--)
  {
    analogWrite(mp,i);
    analogWrite(mn,0);
    delay(20);
  }
  delay(500);
  for(int i=0;i<255;i++)
  {
    analogWrite(mp,i);
    analogWrite(mn,0);
    delay(20);
  }
  
}
