/****************************
Author:Asha Patel
Title:Alternate ON OFF eight LED.
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
int num[]={0xaa,0x55};
void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<2;i++)
  {
    PORTD=num[i];
    delay(100);
  }
}
