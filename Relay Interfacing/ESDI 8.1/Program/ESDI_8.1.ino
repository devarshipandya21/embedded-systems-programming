/********************************** 
 * Title:Led flash using Relay.   *
 * Date:02/09/2017                *
 * Author:Smit Khanpara           *
 * ID No:15it041                  *
 * E-mail:15it041@charusat.edu.in *
 *********************************/
 
#define LED 13
void setup() {
  pinMode(LED,OUTPUT);
}

void loop() {
  digitalWrite(LED,HIGH);
  delay(1000);
  digitalWrite(LED,LOW);
  delay(1000);
}
