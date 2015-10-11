/*  This program flashes the LED between the blue and green leds
    at half second intervals. There is also an error in this program,
    can you spot it? Hint: it's right near the bottom.
*/
 
#include <Esplora.h>
 
void setup() {  
  // Nothing to setup in this program
}
 
void loop() {  
  Esplora.writeRGB(0, 0, 255);  // Turn on blue LED
  delay(500);                   // Wait half a second
  Esplora.writeRGB(0, 255, 0);  // Turn on greed LED
  delay(500)                    // Wait half a second
}
