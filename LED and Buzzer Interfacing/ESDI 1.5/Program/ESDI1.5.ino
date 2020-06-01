/****************************
Author:Asha Patel
Title:Interface 8 LEDs. Generate left series pattern.
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
int num[]={0x80,0xc0,0xe0,0xf0,0xf8,0xfc,0xfe,0xff,0x00};
void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<=8;i++)
  {
     PORTD=num[i];//left series
     delay(50);
  }
}
