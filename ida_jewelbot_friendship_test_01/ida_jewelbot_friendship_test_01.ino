void setup() {
  // put your setup code here, to run once
}

// Declare Jewelbots hardware components to use
Buzzer buzz;
Timer timer;
Animation animation;

// Declare booleans which control when you first see a friend of a particular color
bool first_time_red = true;

void loop() {
  // Red friend group:
  if ((see_red_friends()) && (first_time_red)) {
    buzz.short_buzz();
    animation.rainbows();
    buzz.short_buzz();
    timer.pause(500);
    first_time_red = false;
  } else if ((!see_red_friends()) && (!first_time_red)) {
    first_time_red = true;
  LED led;
  led.flash_single(SE, BLUE, 1000);
  }
}  

