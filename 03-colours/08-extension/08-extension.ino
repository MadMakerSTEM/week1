#include <Esplora.h>

int redvalue = 0;	// modify these values
int greenvalue = 0; 	// modify these values

void setup() {
  int slider = Esplora.readSlider();
  // slider gives values of 1023 on left and 0 on right
  // choose an appropriate threshold to change colour
  if (slider > redvalue) {
    // make LED red
  }
  else if (slider > greenvale) {
    // make LED green
  }
  else {
    // make LED blue
  }
  // Add blinking portion here.
}
