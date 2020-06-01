/****************************
Author:Asha Patel
Title:Display 0 to 9 on segment.
Date:02/09/2017
Email:15it073@charusat.edu.in
*****************************/
void setup() {
 for(int i=0;i<7;i++)
 {
  pinMode(i,OUTPUT);
 }
}
int num[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<10;i++)
  {
    PORTD=num[i];
    delay(500);
  }
}
