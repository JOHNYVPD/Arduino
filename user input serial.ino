void setup() {
  // put your setup code here, to run once:
long a;
Serial.begin(9600);
while (Serial.available()==0){}
a=Serial.parseInt();
Serial.print(a);

}

void loop() {
  // put your main code here, to run repeatedly:

}
