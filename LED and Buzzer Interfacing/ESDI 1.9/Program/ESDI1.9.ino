/****************************
Author:Asha Patel
Title:Display 00 to FF on LED.
Date:02/09/2017
Email:15it073@charusat.edu.in
*****************************/
void setup() {
  // put your setup code here, to run once:
   for(int i=0;i<=7;i++)
  {
    pinMode(i,OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<256;i++)
  {
    PORTD=i;
    delay(50);
  }
}
