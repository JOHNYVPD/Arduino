#include <Wire.h> 
byte n;  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  Serial.begin(9600);
  Serial.println("finding I2C devicess");
  Wire.begin();
  for(n=32;n<=63;n++)
  {
    Wire.beginTransmission(n);
    if ( Wire.endTransmission()==0)
    {
      Serial.print("Slave Address: 0x");
      Serial.println(n,HEX);
      break;
      
    }
  }
}


void loop()
{
}
