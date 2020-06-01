/****************************
Author:Asha Patel
Title:Display 00 to 99 on segment.
Date:02/09/2017
Email:15it073@charusat.edu.in
*****************************/

#define e1 8
#define e2 9
void setup() {
for(int i=0;i<=9;i++)
{
  pinMode(i,OUTPUT);
}
}
int num[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
void loop() {
    for(int i=0;i<=99;i++)
    {
      for(int j=0;j<=70;j++)
      {
      digitalWrite(e1,HIGH);     
      PORTD=num[i/10];
      delay(4);
      digitalWrite(e1,LOW);

      digitalWrite(e2,HIGH);
      PORTD=num[i%10];
      delay(4);
      digitalWrite(e2,LOW);
      }
    }
}
