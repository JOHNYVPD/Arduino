byte LUT[]={0x1E,0x1C,0x34,0x14,0x40};
byte LU[]={0x01,0x22,0x22,0x22,0x11};

void setup() {
  // put your setup code here, to run once:
DDRD =0xFF;
DDRB =0xFF;
pinMode(A0,OUTPUT);
digitalWrite(A0,LOW);
pinMode(A1,OUTPUT);
digitalWrite(A1,LOW);
for ( int i =0;i<5;i++)
{
  PORTD=LUT[i];
  PORTB=LU[i];
  delay(1000);
  }
digitalWrite(A1,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

}
