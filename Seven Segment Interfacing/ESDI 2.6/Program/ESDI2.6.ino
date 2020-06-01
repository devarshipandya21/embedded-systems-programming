/****************************
Author:Asha Patel
Title:Display the clock(MM : SS) on segment
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
   // put your setup code here, to run once:
  for(int i=0;i<=13;i++)
  {
    pinMode(i,OUTPUT);
  }
 

}
int num[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
int num1[]={0x40,0x79,0x24,0x30,0x19,0x12,0x02,0xf8,0x00,0x10};
void loop() {
   // put your main code here, to run repeatedly:
   digitalWrite(e1,LOW);
    digitalWrite(e2,LOW);
  for(int i=1;i<=3600;i++)
  {
    for(int z=0;z<=45;z++)
    {
   
    //minute  
    digitalWrite(e3,HIGH);
    int l=(i/60)%60;
    PORTD=num[(l/10)];
     delay(2);
     digitalWrite(e3,LOW);

   
    digitalWrite(e4,HIGH);
    int m=(i/60)%60;
    PORTD=num1[(m%10)];
     delay(2);
     digitalWrite(e4,LOW);

    //second
    digitalWrite(e5,HIGH);
    int n=(i%60);
    PORTD=num[(n/10)];
     delay(2);
     digitalWrite(e5,LOW);

     
    
    digitalWrite(e6,HIGH);
    int p=(i%60);
    PORTD=num[(p%10)];
     delay(2);
     digitalWrite(e6,LOW);
    }
  }
}
