/*  This program flashes the LED at a given speed determined by the value set
    inside the delay function. You will need to uncomment one line at the top of the
    program to get this program to compile.
*/
 
//#include <Esplora.h>
 
void setup() {  
  // Nothing to setup in this program
}
 
void loop() {  
  Esplora.writeRGB(0, 0, 255);  // Turn on blue LED
  delay(1000);                  // Wait one second (units are in milliseconds)
  Esplora.writeRGB(0, 0, 0);    // Turn off blue LED
  delay(1000);                  // Wait one second
}
