/****************************
Author:Asha Patel
Title:Flash/toggle/on off single LED.
Date:02/09/2017
Email:15it073@charusat.edu.in
*****************************/

#define A 0
void setup()
{
  // put your setup code here, to run once:
  pinMode(A,OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(A,HIGH);
  delay(100);
  digitalWrite(A,LOW);
  delay(100); 
}
