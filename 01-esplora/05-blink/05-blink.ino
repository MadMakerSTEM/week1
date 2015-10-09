/*  This is a modified version of Esplora blink. This program cycles through the
    three primary colours - red, green and blue.
*/
 
#include <Esplora.h>
 
void setup() {  
  // There's nothing to set up for this sketch
}
 
void loop() {  
  Esplora.writeRGB(255, 0, 0);          // make the LED red (red, green, blue)
  delay(1000);                          // wait 1 second, the units are in milliseconds
  Esplora.writeRGB(0, 255, 0);          // make the LED green
  delay(1000);                          // wait 1 second  
  Esplora.writeRGB(0, 0, 255);          // make the LED blue  
  delay(1000);                          // wait 1 second
}
