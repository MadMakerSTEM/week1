/* What happens if we want two switches to do different things? In this case,
   we simply add another statement for the second switch after the first. So
   when the program executs, we first check if SWITCH_1 is pressed, and if it
   is we turn on the RED led. Then we check if SWITCH_2 is pressed, and if so
   we turn on the GREEN led.
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
  if (Esplora.readButton(SWITCH_2) == LOW) {  // Check if switch 2 is pressed.
    Esplora.writeGreen(255);                // Turn green led on
  }
  else {
    Esplora.writeGreen(0);                  // Turn green led off
  }
}
