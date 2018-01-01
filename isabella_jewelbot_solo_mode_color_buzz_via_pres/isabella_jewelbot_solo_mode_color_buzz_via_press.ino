#include <Arduino.h>

// Declare Jewelbots hardware components to use
Buzzer buzz;
Animation animation;

int korte_tryk=0;
void button_press(void){
  // Define what happens when the Magic Button is pressed quickly
  // (when the Jewelbot is not plugged into power)
  ++korte_tryk;
}
void button_press_long(void) {
  // Define what happens when the Magic Button is held for 2 seconds
  // (when the Jewelbot is not plugged into power)
  korte_tryk=0;
}

void setup() {
  // put your setup code here, to run once
}

void loop() {

}
