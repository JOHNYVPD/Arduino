#include <SoftwareSerial.h>
SoftwareSerial SUART(2, 3); // RX, TX
char myData [20];

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  SUART.begin(9600);
  SUART.println("nano");
 
 }
void loop() { // run over and over
if(Serial.available()!=0)
{
  byte m = Serial.readBytesUntil(0x0A,myData,20);
 SUART.println(myData);
  memset(myData,0x00,20);
}
}
