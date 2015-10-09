/*
How to use:
In its initial state, the LED shines the colour which is stored
in memory (default is white). If you hold down the bottom button
it will readjust the intensity of the red light accordingly with
the position of the slider (with far-right being 0). Holding the
left does the same for the green, and top for the blue. When the
right button is pushed, the light turns off. Do not look directly
at the light, as it can be bright. Instead use a piece of paper
to help diffuse it.
 
MadMaker 2015
*/
 
#include <Esplora.h>
 
// What State are we in. 0 for playback, 1 for write.
int state = 0;
 
boolean upSwitchWasPress = false;
boolean leftSwitchWasPress = false;
boolean rightSwitchWasPress = false;
 
// start off with white value
int red = 255;
int green = 255;
int blue =255;
 
void setup() {
  Serial.begin(9600);
}
 
void loop() {
  detectState();
  showColour();
  offColour();
  printColour();
}
 
void printColour(){ //prints the colour stored to the Serial Monitor
  Serial.print("RGB:");
  Serial.print(red);
  Serial.print(",");
  Serial.print(green);
  Serial.print(",");
  Serial.println(blue);
}
void showColour(){
  if (state==0){
    Esplora.writeRGB(red,green,blue);
  }
    int sliderPosition = Esplora.readSlider();
    byte brightness = map(sliderPosition, 0, 1024, 0, 180);
      if (Esplora.readButton(SWITCH_DOWN) == LOW) {
        red = brightness;
        Esplora.writeRGB(red,green,blue);
      }
      else if(Esplora.readButton(SWITCH_LEFT) == LOW){
        green = brightness;
        Esplora.writeRGB(red,green,blue);
      }
      else if(Esplora.readButton(SWITCH_UP) == LOW){
        blue = brightness;
        Esplora.writeRGB(red,green,blue);
      }
  }
 
 
void offColour(){
  if (state==1){
        Esplora.writeRGB(0,0,0);
 
  }
}
 
/*
 * Detect State
 */
void detectState() {
  // Change State
  // Edge Detection Switch Up
  boolean rightSwitch;
  int rightSwitchPress = Esplora.readButton(SWITCH_RIGHT) == LOW;
  rightSwitch = rightSwitchWasPress && !rightSwitchPress;
  rightSwitchWasPress = rightSwitchPress;
 
  if (rightSwitch) {
    state = state == 1 ? 0 : state + 1;
  }
   
  if (state == 0) {
    // Remove Mode
    Esplora.writeRGB(red, green, blue);
  } else  {
    // Add Mode
    Esplora.writeRGB(0, 0, 0);
  }    
}
