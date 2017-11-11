
int number_of_short_presses = 0;
int number_of_long_presses = 0;

void setup() {
  // put your setup code here, to run once:
}

void button_press()
{
  number_of_long_presses = 0;
  ++number_of_short_presses;
}

void button_press_long()
{
  number_of_short_presses = 0;
  ++number_of_long_presses;
}

void do_rainbow()
{
  Animation animation;
  animation.rainbows();
}

void do_my_dance()
{
  Animation animation;
  animation.breathe_single_color(GREEN);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (number_of_short_presses == 1) {
    do_rainbow();
  } else if (number_of_short_presses == 2) {
    do_my_dance();
  } else {
    LED led;
    led.flash_single(SE, BLUE, 1000);
  }
}
