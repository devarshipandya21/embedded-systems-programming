/****************************
Author:Asha Patel
Title:Display 0000 to 9999 on segment.
Date:02/09/2017
Email:15it073@charusat.edu.in
*****************************/
#define e1 8
#define e2 9
#define e3 10
#define e4 11

int num[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
void setup() {
  // put your setup code here, to run once;
  for(int i=0;i<12;i++)
  {
    pinMode(i,OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
 
 for(int i=0;i<=9999;i++)
 {
  for(int j=0;j<=100;j++)
  {
                          digitalWrite(e1,HIGH);
                          PORTD=num[i/1000];
                          delay(1);
                          digitalWrite(e1,LOW);

                                  digitalWrite(e2,HIGH);
                                  PORTD=num[(i/100)%10];
                                  delay(1);
                                   digitalWrite(e2,LOW);
                         
                          digitalWrite(e3,HIGH);
                          PORTD=num[(i/10)%10];
                          delay(1);         
                          digitalWrite(e3,LOW);
                          
                                 digitalWrite(e4,HIGH);
                                 PORTD=num[i%10];
                                 delay(1);
                                 digitalWrite(e4,LOW);   
  }
 }
}
