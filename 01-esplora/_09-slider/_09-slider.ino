/* This program flashes the blue LED  at a given speed determined by the
   position of the slider. The program saves the value of the slider into
   an "int" or integer, so we can use it later in the program.
*/
 
#include <Esplora.h>
 
void setup() {  
  // Nothing to setup in this program
}
 
void loop() {  
  int slider = Esplora.readSlider();    // Read the slider
  Esplora.writeRGB(0, 0, 255);          // Turn on blue LED
  delay(slider);                        // Wait
  Esplora.writeRGB(0, 0, 0);            // Turn the led off
  delay(slider);                        // Wait
}
