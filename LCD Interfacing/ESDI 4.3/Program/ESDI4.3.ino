/****************************
Author:Asha Patel
Title:Display 000 to 999 on segment.
Date:02/09/2017
Email:15it073@charusat.edu.in
*****************************/
#include<LiquidCrystal.h>

LiquidCrystal lcd(9,8,3,2,1,0);

void setup()
{
  lcd.begin(16,2);
}

void loop()
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
    }
    else if(i>9 && i<100)
    {
      lcd.setCursor(0,0);
      lcd.print("0");
      lcd.setCursor(1,0);
      lcd.print(i);
       delay(200);
    }
    else
    {
      lcd.setCursor(0,0);
      lcd.print(i);
      delay(200);
    }
  }
}

