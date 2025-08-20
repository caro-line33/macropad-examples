#include <Keyboard.h>
#include <Mouse.h>

const int keyPins[] = {3, 7, 15, 18}; // buttons connected to these pins
const int numPins = sizeof(keyPins) / sizeof(keyPins[0]);

void setup() {
  for (int i = 0; i < numPins; ++i) {
    pinMode(keyPins[i], INPUT_PULLUP);
  }

}

void loop() {
  if(digitalRead(3) == LOW){
    Keyboard.print("1");
    delay(500);
  }

  if(digitalRead(18) == LOW){
    Keyboard.print("2");
    delay(500);
  }

  if(digitalRead(7) == LOW){
    Keyboard.print("3");
    delay(500);
  }

  if(digitalRead(15) == LOW){
    Keyboard.print("4");
    delay(500);
  }
}
