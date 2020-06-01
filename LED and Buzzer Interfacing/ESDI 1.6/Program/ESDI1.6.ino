/****************************
Author:Asha Patel
Title:Interface 8 LEDs. Generate right series pattern.
Date:02/09/2017
Email:15it073@charusat.edu.in
*****************************/
void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<=7;i++)
  {
    pinMode(i,OUTPUT);
  }
}
int num[]={0x01,0x03,0x07,0x0f,0x1f,0x3f,0x7f,0xff,0x00};
void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<=8;i++)
  {
    PORTD=num[i];
    delay(50);
  }
}
