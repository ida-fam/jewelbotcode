/// This arduino code is to be used in Solo Coding mode.
/// To enable button presses in Friendship Mode you have 
/// to register the set_arduino_button() in the setup() section
#include <Arduino.h>

int number_of_short_presses = 0;
int number_of_long_presses = 0;

void setup()
{
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

void do_my_dance(ColorLabel color)
{
  Animation animation;
  animation.breathe_single_color(color);
}

void loop()
{
  // put your main code here, to run repeatedly:
  if (number_of_short_presses == 1)
  {
    do_rainbow();
  }
  else if (number_of_short_presses == 2)
  {
    do_my_dance(GREEN);
  }
  else if (number_of_short_presses == 3)
  {
    do_my_dance(RED);
  }
  else if (number_of_short_presses == 4)
  {
    do_my_dance(BLUE);
  }
  else if (number_of_short_presses == 5)
  {
    do_my_dance(CYAN);
  }
  else
  {
    LED led;
    led.flash_single(SE, BLUE, 1000);
  }
}
