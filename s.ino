#include <Keypad.h>
const byte ROWS = 4; /* four rows */
const byte COLS = 4; /* four columns */
/* define the symbols on the buttons of the keypads */
char Keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
byte rowPins[ROWS] = {2, 3, 4, 5}; /* connect to the row pinouts of the keypad */
byte colPins[COLS] = {6, 7, 8, 9}; /* connect to the column pinouts of the keypad */
#define sw 10
/* initialize an instance of class NewKeypad */
Keypad customKeypad = Keypad( makeKeymap(Keys), rowPins, colPins, ROWS, COLS);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(38400);
  pinMode(sw, INPUT_PULLUP);

}
void loop()
{
  if (digitalRead(sw) == HIGH) {
    if (Serial.available())
    {
      char dataFromMaster = Serial.read();
      Serial.print("Master to slave : ");
      Serial.println(dataFromMaster);
    }
  }
  if (digitalRead(sw) == LOW) {
    char customKey = customKeypad.getKey();

    if (customKey) {
      Serial.print(customKey);
    }
  }
}
