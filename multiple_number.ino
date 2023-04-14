byte LUT[]={0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F, 0x77, 0x7C, 0x39, 0x5E, 0x79, 0x71};

void setup() {
  // put your setup code here, to run once:
DDRD =0xFF;
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
PORTD=LUT[5];
delay(10);

digitalWrite(8,HIGH);
digitalWrite(9,LOW);
PORTD=LUT[2];
delay(10);
}
