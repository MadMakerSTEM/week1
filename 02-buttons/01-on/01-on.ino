/* This program turns on the red led after SWITCH_1 is pressed.
*/
 
#include <Esplora.h>
 
void setup() {
  // Nothing to setup
}
 
void loop() {
  if (Esplora.readButton(SWITCH_1) == LOW) {  // Check if switch 1 is pressed.
    Esplora.writeRed(255);                  // Turn red led on
  }
}
