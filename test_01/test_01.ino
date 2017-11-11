void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  LED led;
  led.turn_on_single(NE, RED);
  led.turn_on_single(SE, BLUE);
  led.turn_on_single(SW, GREEN);
  led.turn_on_single(NW, YELLOW);
  Timer timer;
  timer.pause(1000);
  led.turn_off_all();
  led.flash_single(SE, RED, 1000);
  
}
