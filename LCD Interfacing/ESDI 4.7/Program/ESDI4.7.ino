/****************************
Author:Asha Patel
Title:Display the clock(HH : MM : SS) on LCD.
Date:02/09/2017
Email:15it073@charusat.edu.in
*****************************/
#include<LiquidCrystal.h>

LiquidCrystal lcd(9,8,3,2,1,0);

void setup() {
  lcd.begin(16,2);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<=86400;i++)
  {
        lcd.setCursor(0,0);
        int j=(i/60)/60;   
        lcd.print(j/10);
        lcd.setCursor(1,0);
         lcd.print(j%10);
         delay(50);
    
      lcd.setCursor(2,0);
      lcd.print(":");
      lcd.setCursor(3,0);
        int k=(i/60)%60;   
        lcd.print(k/10);
        lcd.setCursor(4,0);
         lcd.print(k%10);
         delay(50);
    
      lcd.setCursor(5,0);
      lcd.print(":");
         lcd.setCursor(6,0);
        int l=(i%60);   
        lcd.print(l/10);
        lcd.setCursor(7,0);
         lcd.print(l%10);
         delay(50); 
  }
}
