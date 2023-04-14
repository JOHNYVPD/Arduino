#define led 3
int n;
int t;
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  Serial.println("how man time led is blinking");
  while (Serial.available() == 0) {

  }
  n = Serial.parseInt();
 Serial.println("time");
  while (Serial.available() == 0) {

  }
  t = Serial.parseFloat();
  Bled(n);
}

void loop() {
  // put your main code here, to run repeatedly:

}
void Bled(int n) {
  for ( int i = 0; i < n; i++)
  {
    digitalWrite(led, HIGH);
    delay( t*1000);
    digitalWrite(led, LOW);
    delay( t*1000);

  }
}
