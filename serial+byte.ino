
byte y = 0xE5; 
void setup() {
  // put your setup code here, to run once:
        //byte is a keyword used to mean that F5 is an unsigned/only positive 8bit number
        //0x is used to mean that F5 is in base hex
Serial.begin(9600);



}

void loop() {
  // put your main code here, to run repeatedly:
bool n = bitRead(y, 4); // n = y4 = 1
digitalWrite(13, n);
Serial.println(n);
delay(1000);
}
