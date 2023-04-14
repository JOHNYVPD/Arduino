void setup() {
  // put your setup code here, to run once:
long int a;
Serial.begin(9600);
Serial.println("what is your id");
while(Serial.available()==0){}
a=Serial.parseInt();
Serial.print("ID =");
Serial.println(a);

}

void loop() {
  // put your main code here, to run repeatedly:

}
