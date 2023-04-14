byte LUT[] = {0x3F, 0x18, 0xB6, 0xBC, 0x99, 0xAD, 0xAF, 0x38, 0xFF, 0xBD, 0xBB, 0x8F, 0x27, 0x9E, 0xA7, 0xA3};
byte a;
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  for (int i = 6; i <= 15; i++)
  {
    pinMode(i, OUTPUT);
  }
}
void loop() {
  // put your main code here, to run repeatedly:

Serial.println("what is your input number");
  while (Serial.available() == 0) {}
  a = Serial.parseInt();
  Serial.print("display =");
  Serial.println(a);
  byte b = LUT[a];
  byte y = b;
  PORTB = y;
  bool m = bitRead(y, 6);
  digitalWrite (6, m);
  digitalWrite(7, bitRead(y, 7));
  digitalWrite(A0, LOW);
  delay(100);
  for ( int i = 0; i <=a; i++)
  {
    PORTB = LUT[i];
    byte b = LUT[i];
    byte y = b;
    PORTB = y;
    bool m = bitRead(y, 6);
    digitalWrite (6, m);
    digitalWrite(7, bitRead(y, 7));

    delay(1000);

  }
  digitalWrite(A0, HIGH);
}
