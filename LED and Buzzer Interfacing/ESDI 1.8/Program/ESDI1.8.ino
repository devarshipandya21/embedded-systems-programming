/****************************
Author:Asha Patel
Title:Generate different series using switch.
Date:02/09/2017
Email:15it073@charusat.edu.in
*****************************/

#define button0 A0
#define button1 A1
#define button2 A2
#define button3 A3
#define button4 A4
#define button5 A5

int n1[]={0xff,0x00};
int n2[]={0xf0,0x0f};
int n3[]={0xaa,0x55};
int n4[]={0x80,0xc0,0xe0,0xf0,0xf8,0xfc,0xfe,0xff,0x00};
int n5[]={0x01,0x03,0x07,0x0f,0x1f,0x3f,0x7f,0xff,0x00};
int n6[]={0x80,0xc0,0xe0,0xf0,0xf8,0xfc,0xfe,0xff,0x00,0x01,0x03,0x07,0x0f,0x1f,0x3f,0x7f,0xff,0x00};

void setup() {
  for(int i=0;i<=7;i++)
  {
    pinMode(i,OUTPUT);
  }
  pinMode(button0,INPUT_PULLUP);
  pinMode(button1,INPUT_PULLUP);
  pinMode(button2,INPUT_PULLUP);
  pinMode(button3,INPUT_PULLUP);
  pinMode(button4,INPUT_PULLUP);
  pinMode(button5,INPUT_PULLUP);
  // put your setup code here, to run once:

}

void loop() {
  PORTD=0x00;
   while(digitalRead(button0)==HIGH && digitalRead(button1)==HIGH && digitalRead(button2)==HIGH && digitalRead(button3)==HIGH 
   && digitalRead(button4)==HIGH && digitalRead(button5)==HIGH)
  {
  PORTD=0x00;
  }
  if(digitalRead(button0)==LOW)
  {
    goto l1;
  }
  else if(digitalRead(button1)==LOW)
  {
    goto l2;
  }
  else if(digitalRead(button2)==LOW)
  {
    goto l3;
  }
  else if(digitalRead(button3)==LOW)
  {
    goto l4;
  }
  else if(digitalRead(button4)==LOW)
  {
    goto l5;
  }
  else if(digitalRead(button5)==LOW)
  {
    goto l6;
  }



 l1:
 if(digitalRead(button0)==LOW)
 {
  for(int j=0;j<=10;j++)
  {
 for(int i=0;i<=1;i++)
 {
          PORTD=n1[i];
            delay(100);
             if(digitalRead(button0)==LOW)
        {
          goto l1;
        }
        else if(digitalRead(button1)==LOW)
        {
          goto l2;
        }
        else if(digitalRead(button2)==LOW)
        {
          goto l3;
        }
        else if(digitalRead(button3)==LOW)
        {
          goto l4;
        }
        else if(digitalRead(button4)==LOW)
        {
          goto l5;
        }
        else if(digitalRead(button5)==LOW)
        {
          goto l6;
        }
 }
 }
 }

l2:
if(digitalRead(button1)==LOW)
 {
  for(int j=0;j<=10;j++)
  {
for(int i=0;i<=1;i++)
 {
          PORTD=n2[i];
            delay(100);
      
        
               if(digitalRead(button0)==LOW)
          {
            goto l1;
          }
          else if(digitalRead(button1)==LOW)
          {
            goto l2;
          }
          else if(digitalRead(button2)==LOW)
          {
            goto l3;
          }
          else if(digitalRead(button3)==LOW)
          {
            goto l4;
          }
          else if(digitalRead(button4)==LOW)
          {
            goto l5;
          }
          else if(digitalRead(button5)==LOW)
          {
            goto l6;
          }
 }
 }

}


  l3:
  if(digitalRead(button2)==LOW)
 {
  for(int j=0;j<=10;j++)
  {
  for(int i=0;i<=1;i++)
  {
   
    PORTD=n3[i];
      delay(50);
    
             if(digitalRead(button0)==LOW)
              {
                goto l1;
              }
              else if(digitalRead(button1)==LOW)
              {
                goto l2;
              }
              else if(digitalRead(button2)==LOW)
              {
                goto l3;
              }
              else if(digitalRead(button3)==LOW)
              {
                goto l4;
              }
              else if(digitalRead(button4)==LOW)
              {
                goto l5;
              }
              else if(digitalRead(button5)==LOW)
              {
                goto l6;
              }
  }
 }
}


l4:
if(digitalRead(button3)==LOW)
 {
  for(int j=0;j<=10;j++)
  {
for(int i=0;i<=8;i++)
{
  PORTD=n4[i];//left series
      delay(50);
      
                  if(digitalRead(button0)==LOW)
              {
                goto l1;
              }
              else if(digitalRead(button1)==LOW)
              {
                goto l2;
              }
              else if(digitalRead(button2)==LOW)
              {
                goto l3;
              }
              else if(digitalRead(button3)==LOW)
              {
                goto l4;
              }
              else if(digitalRead(button4)==LOW)
              {
                goto l5;
              }
              else if(digitalRead(button5)==LOW)
              {
                goto l6;
              }
}
 }
}

l5:
if(digitalRead(button4)==LOW)
 {
  for(int j=0;j<=10;j++)
  {
for(int i=0;i<=8;i++)
{
  PORTD=n5[i];
      delay(50);
      
                        if(digitalRead(button0)==LOW)
                        {
                          goto l1;
                        }
                        else if(digitalRead(button1)==LOW)
                        {
                          goto l2;
                        }
                        else if(digitalRead(button2)==LOW)
                        {
                          goto l3;
                        }
                        else if(digitalRead(button3)==LOW)
                        {
                          goto l4;
                        }
                        else if(digitalRead(button4)==LOW)
                        {
                          goto l5;
                        }
                        else if(digitalRead(button5)==LOW)
                        {
                          goto l6;
                        }
}
 }
}

 l6:
 if(digitalRead(button5)==LOW)
 {
  for(int j=0;j<=10;j++)
  {
 for(int i=0;i<=17;i++)
 {
  PORTD=n6[i]; //left series
      delay(50);
     
              if(digitalRead(button0)==LOW)
          {
            goto l1;
          }
          else if(digitalRead(button1)==LOW)
          {
            goto l2;
          }
          else if(digitalRead(button2)==LOW)
          {
            goto l3;
          }
          else if(digitalRead(button3)==LOW)
          {
            goto l4;
          }
          else if(digitalRead(button4)==LOW)
          {
            goto l5;
          }
          else if(digitalRead(button5)==LOW)
          {
            goto l6;
          }
 }
  }
 }
  // put your main code here, to run repeatedly:
}


