/* The last program used SWITCH_1 to turn on and led, but the problem is it
   never turns off. The lesson here is that the Arduino Esplora only ever does
   whatever you tell it to. In this program we add an else statement so the
   led turns off when we release the button.
*/
 
#include <Esplora.h>
 
void setup() {
  // Nothing to setup
}
 
void loop() {
  if (Esplora.readButton(SWITCH_1) == LOW) {  // Check if switch 1 is pressed.
    Esplora.writeRed(255);                  // Turn red led on
  }
  else {
    Esplora.writeRed(0);                    // Turn red led off
  }
}
