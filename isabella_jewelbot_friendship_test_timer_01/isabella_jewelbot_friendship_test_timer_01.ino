// Declare Jewelbots hardware components to use
Buzzer buzz;
Timer timer;
Animation animation;

void setup() {
  // put your setup code here, to run once
}


// Declare booleans which control when you first see a friend of a particular color
int antal_kvarter =0;

void loop() {
  timer.pause(2000);
 
  buzz.long_buzz();
  ++antal_kvarter;

  if((antal_kvarter%4)==0) {
    animation.rainbows();
  }
}
