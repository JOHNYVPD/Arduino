int n;
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  Serial.print("input,n: ");
  while (Serial.available() == 0) {}

  n = Serial.parseInt();
  Serial.println(n);
  int A = n * n;
  Serial.print("Square value = ");
  Serial.println(A);

}
