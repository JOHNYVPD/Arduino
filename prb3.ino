byte LUT[]={0x60, 0xFC, 0x52, 0x18, 0xCC, 0x09, 0x01, 0x3C, 0x00, 0x08, 0x04, 0x41, 0x23, 0x50, 0x03, 0x07};

void setup() {
  // put your setup code here, to run once:
DDRD =0xFF;
pinMode(8,OUTPUT);
digitalWrite(8,HIGH);
for ( int i =0;i<16;i++)
{
  PORTD=LUT[i];
  delay(1000);
  
}
digitalWrite(8,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

}
