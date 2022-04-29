#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Hello World!");
  for (;;) {
    /*Stops the digispark from running the scipt again*/
  }
}