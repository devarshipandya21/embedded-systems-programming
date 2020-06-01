/****************************
Author:Asha Patel
Title:Display the string on LCD.
Date:02/09/2017
Email:15it073@charusat.edu.in
*****************************/
#include<LiquidCrystal.h>

LiquidCrystal lcd(9,8,3,2,1,0);

void setup() {
    lcd.begin(16,2);
    lcd.setCursor(0,0);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.print("Hello World..!!");
   lcd.setCursor(0,0);
}
