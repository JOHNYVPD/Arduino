byte LUT[]={0xFC, 0x60, 0xDA, 0xF2, 0x66, 0xB6, 0xBE, 0xE0, 0xFE, 0xF6, 0xEE, 0x3E, 0x9C, 0x7A, 0x9E, 0x8E};
byte a;
void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);

  for (int i = 3; i <= 15; i++)
  {
    pinMode(i, OUTPUT);
  }
  
}



void loop() {
  // put your main code here, to run repeatedly:
  
 Serial.println("what is your input number");
while(Serial.available()==0){}
a=Serial.parseInt();
Serial.print("display =");
Serial.println(a);
  byte b=LUT[a];
  byte y = b;
  PORTD = y;
  bool m = bitRead(y, 5);
  digitalWrite (8, m);
  digitalWrite(9, bitRead(y, 6));
  digitalWrite(10, bitRead(y, 7));
  digitalWrite(A0, LOW);
  
}
