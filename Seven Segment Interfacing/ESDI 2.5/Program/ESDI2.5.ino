/****************************
Author:Asha Patel
Title:Multiplexed 4 7-segment.
Date:02/09/2017
Email:15it073@charusat.edu.in
*****************************/
#define e1 8
#define e2 9
#define e3 10
#define e4 11
#define button1 A0
#define button2 A1
#define button3 A2
#define button4 A3


int num[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
void setup() {
  for(int i=0;i<11;i++)
  {
    pinMode(i,OUTPUT);  
  }
  pinMode(button1,INPUT_PULLUP);
  pinMode(button2,INPUT_PULLUP);
  pinMode(button3,INPUT_PULLUP);
  pinMode(button4,INPUT_PULLUP);
}


void loop()
{
  while(digitalRead(button1)==HIGH && digitalRead(button2)==HIGH && digitalRead(button3)==HIGH && digitalRead(button4)==HIGH )
  {
  digitalWrite(e1,LOW);
    digitalWrite(e2,LOW);
      digitalWrite(e3,LOW);
        digitalWrite(e4,LOW);
  }
          if(digitalRead(button1)==LOW) 
          {
            goto l1;
          }
           else if(digitalRead(button2)==LOW)
          {
            goto l2;
          }
           else if(digitalRead(button3)==LOW)
          {
            goto l3;
          }
          else if(digitalRead(button4)==LOW)
          {
            goto l4;
          }

l1:

          for(int i=0;i<=9;i++)  //for 0 to 9
          {
             digitalWrite(e4,HIGH);
                  PORTD=num[i];
                  delay(500);
                  if(digitalRead(button1)==LOW)
                  {
                    goto l1;
                  }
                   else if(digitalRead(button2)==LOW)
                  {
                    goto l2;
                  }
                   else if(digitalRead(button3)==LOW)
                  {
                    goto l3;
                  }
                  else if(digitalRead(button4)==LOW)
                  {
                    goto l4;
                  }
                  
          }


l2:
if(digitalRead(button2)==LOW)
{
  
    for(int i=0;i<=99;i++)  //for 00-99
    {
      for(int j=0;j<=70;j++)
       {  
                        digitalWrite(e3,HIGH);     
                        PORTD=num[i/10];
                        delay(4);
                        digitalWrite(e3,LOW);
                  
                        digitalWrite(e4,HIGH);
                        PORTD=num[i%10];
                        delay(4);
                        digitalWrite(e4,LOW);
           
            if(digitalRead(button1)==LOW)
                  {
                    goto l1;
                  }
                   else if(digitalRead(button2)==LOW)
                  {
                    goto l2;
                  }
                   else if(digitalRead(button3)==LOW)
                  {
                    goto l3;
                  }
                  else if(digitalRead(button4)==LOW)
                  {
                    goto l4;
                  }
               
             }                    
    }
}


l3:
if(digitalRead(button3)==LOW)
{
  
  for(int i=0;i<=999;i++)   //for 000-999
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
                  if(digitalRead(button1)==LOW)
                  {
                    goto l1;
                  }
                   else if(digitalRead(button2)==LOW)
                  {
                    goto l2;
                  }
                   else if(digitalRead(button3)==LOW)
                  {
                    goto l3;
                  }
                  else if(digitalRead(button4)==LOW)
                  {
                    goto l4;
                  }                   
       }     
   }
}



  l4:
  if(digitalRead(button4)==LOW)
{
  for(int i=0;i<=9999;i++)  //for 0000-9999
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
                  if(digitalRead(button1)==LOW)
                  {
                    goto l1;
                  }
                   else if(digitalRead(button2)==LOW)
                  {
                    goto l2;
                  }
                   else if(digitalRead(button3)==LOW)
                  {
                    goto l3;
                  }
                  else if(digitalRead(button4)==LOW)
                  {
                    goto l4;
                  }
     
               }
 }
}
}

