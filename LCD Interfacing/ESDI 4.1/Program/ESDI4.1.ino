/****************************
Author:Asha Patel
Title:Display  0 to 9 on LCD.
Date:02/09/2017
Email:15it073@charusat.edu.in
*****************************/
#include<LiquidCrystal.h>

LiquidCrystal lcd(9,8,3,2,1,0);

void setup() {
   // put your setup code here, to run once:
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<=9;i++)
  {
    lcd.setCursor(0,0);
    lcd.print(i);
    delay(200);
  }
}
