#include<LiquidCrystal.h>
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);

}

void loop() {
  temp=analogRead(A0);
  temp=temp*(5/1023)*100
  Serial.print("tempareture =");
   Serial.print(temp);
    Serial.print("c");
     Serial.println();
     delay(1000);// put your main code here, to run repeatedly:

}
