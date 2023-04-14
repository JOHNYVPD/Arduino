byte LUT[]={0x1F,0x3F,0x36,0x76,0x40};
byte LU[]={0x20,0x00,0x22,0x04,0x09};

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
