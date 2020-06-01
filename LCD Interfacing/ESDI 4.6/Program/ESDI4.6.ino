/****************************
Author:Asha Patel
Title:Display 0000 to 9999 on segment.
Date:02/09/2017
Email:15it073@charusat.edu.in
*****************************/

#include<LiquidCrystal.h>

#define button0 A0
#define button1 A1
#define button2 A2
#define button3 A3

LiquidCrystal lcd(9,8,3,2,1,0);

void setup()
{
  lcd.begin(16,2);
  pinMode(button0,INPUT_PULLUP);
   pinMode(button1,INPUT_PULLUP);
    pinMode(button2,INPUT_PULLUP);
     pinMode(button3,INPUT_PULLUP);
}

void loop()
{
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

  l1:
  if(digitalRead(button0)==LOW)
  {
    for(int i=0;i<=9;i++)
  {
            lcd.setCursor(0,0);
            lcd.print(i);
            delay(200);
          lcd.clear();
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
  }
  }

  l2:
  if(digitalRead(button1)==LOW)
  {
        for(int i=0;i<100;i++)
          {
            if(i<10)
            {
              lcd.setCursor(0,0);
              lcd.print("0");
              lcd.setCursor(1,0);
              lcd.print(i);
              delay(200);
                lcd.clear();
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
            }
            else
            {
               lcd.setCursor(0,0);
              lcd.print(i);
              delay(200);
             lcd.clear();
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
            }
    
        }
  }

  l3:
  if(digitalRead(button2)==LOW)
  {
for(int i=0;i<999;i++)
  {
    if(i<10)
    {
      lcd.setCursor(0,0);
      lcd.print("00");
      lcd.setCursor(2,0);
      lcd.print(i);
       delay(200);
        lcd.clear();
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
    }
    else if(i>9 && i<100)
    {
      lcd.setCursor(0,0);
      lcd.print("0");
      lcd.setCursor(1,0);
      lcd.print(i);
       delay(200);
        lcd.clear();
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
    }
    else
    {
      lcd.setCursor(0,0);
      lcd.print(i);
      delay(200);
       lcd.clear();
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
    }
  }
  }
  
  l4:
if(digitalRead(button3)==LOW)
{
 for(int i=0;i<=9999;i++)
    {
      if(i<10)
      {
        lcd.setCursor(0,0);
        lcd.print("000");               
        lcd.setCursor(3,0);
        lcd.print(i);
        delay(200);
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
            }
      
      else if(i>=10 && i<100)
      {
        lcd.setCursor(0,0);
        lcd.print("00");               
        lcd.setCursor(2,0);
        lcd.print(i);        
        delay(200);
         lcd.clear();
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
      }
      else if(i>=100 && i<999)
      {
        lcd.setCursor(0,0);
        lcd.print("0");        
        lcd.setCursor(1,0);
        lcd.print(i);        
        delay(200);
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
      }
      else 
      {
        lcd.setCursor(0,0);
        lcd.print(i); 
        delay(200);  
         lcd.clear();
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
      }
    } 
}
}


