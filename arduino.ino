

#include <SoftwareSerial.h>

SoftwareSerial BTserial(10, 11); 
const int sw=8;
int sw1=1;
void setup() 
{

BTserial.begin(38400); 
pinMode(sw,INPUT);
digitalWrite(sw,HIGH);


}

void loop() {
  
  sw1=digitalRead(sw);

  if(sw1==LOW)
  {

  BTserial.print("FAULT FOUND LOCATION 3EA1\n");
  delay(5000);
  }

  else
  {
    
  BTserial.print("NO FAULT FOUND ANYWHERE\n");
  }


delay(20);



}
