/****************************
Author:Asha Patel
Title:Display 000 to 999on segment.
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
 digitalWrite(e1,LOW);
 for(int i=0;i<=999;i++)
 {
  for(int j=0;j<=80;j++)
  {
              
                
                      digitalWrite(e2,HIGH);
                       PORTD=num[i/100];
                      delay(2);
                      digitalWrite(e2,LOW);
                      

                       digitalWrite(e3,HIGH);
                       PORTD=num[(i/10)%10];
                            delay(2);            
                      digitalWrite(e3,LOW);

                       digitalWrite(e4,HIGH);
                      PORTD=num[i%10];
                      delay(2);
                      digitalWrite(e4,LOW);
                     
                            
                     
  }
 }
}
