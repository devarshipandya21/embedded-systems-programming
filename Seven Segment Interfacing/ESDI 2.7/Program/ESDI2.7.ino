/****************************
Author:Asha Patel
Title:Display the clock(HH : MM) on segment.
Date:02/09/2017
Email:15it073@charusat.edu.in
*****************************/

#define e1 8
#define e2 9
#define e3 10
#define e4 11
#define e5 12
#define e6 13
void setup() {
  for(int i=0;i<=13;i++)
  {
    pinMode(i,OUTPUT);
  }
  // put your setup code here, to run once:


}
int num[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
int num1[]={0x40,0x79,0x24,0x30,0x19,0x12,0x02,0xf8,0x00,0x10};
void loop() {
  digitalWrite(e1,LOW);
  digitalWrite(e2,LOW);
   // put your main code here, to run repeatedly:
  for(int i=1;i<=1440;i++)
  {
    for(int z=0;z<=125;i++)
    {
    //hour
    digitalWrite(e3,HIGH);
    int j=(i/60)/60;
    PORTD=num[(j/10)];
     delay(2);
     digitalWrite(e3,LOW);

    
    digitalWrite(e4,HIGH);
    int k=(i/60)/60;
    PORTD=num1[(k%10)];
     delay(2);
     digitalWrite(e4,LOW);
     
    //minute
    
   
    digitalWrite(e5,HIGH);
    int l=(i/60)%60;
    PORTD=num[(l/10)];
     delay(2);
     digitalWrite(e5,LOW);

   
    digitalWrite(e6,HIGH);
    int m=(i/60)%60;
    PORTD=num[(m%10)];
     delay(2);
     digitalWrite(e6,LOW);

   
    }
  }
}
