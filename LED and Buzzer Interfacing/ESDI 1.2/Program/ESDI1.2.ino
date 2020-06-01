/****************************
Author:Asha Patel
Title:Flash/toggle/on off eight LEDs.
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

int num[]={0xff,0x00};

void loop() {
   // put your main code here, to run repeatedly:
  for(int i=0;i<2;i++)
  {
      PORTD=num[i];
      delay(100);
  }
 

}
