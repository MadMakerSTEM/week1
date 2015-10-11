#include <Esplora.h>
 
void setup() {
}
 
void loop() {
  if (Esplora.readButton(SWITCH_1) == LOW) {
    Esplora.writeRed(255);    // turn red led on
  }
  else {
    Esplora.writeRed(0);      // turn red led off
  }
  if (Esplora.readButton(SWITCH_2) == LOW) {
    Esplora.writeGreen(255);  // turn green led on
  }
  else {
    Esplora.writeGreen(0);    // turn green led off
  }
  if (Esplora.readButton(SWITCH_3) == LOW) {
    Esplora.writeBlue(255);  // turn blue led on
  }
  else {
    Esplora.writeBlue(0);    // turn blue led off
  }
}
