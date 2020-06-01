/****************************
Author:Asha Patel
Title:Interface 8 LEDs. Out of Four LED ON and Four LED OFF.
Date:02/09/2017
Email:15it073@charusat.edu.in
*****************************/
void setup() {
  // put your setup code here, to run once:
   for(int i=0;i<8;i++)
    {
      pinMode(i,OUTPUT);
    }
}
int num[]={0xf0,0x0f};
void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<2;i++)
  {
    PORTD=num[i];
    delay(100);
  }
}
