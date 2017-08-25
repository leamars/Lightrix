#include <FastLED.h>

#include "Snake.cpp"
#include "HiRez.cpp"

#define WIDTH 15
#define HEIGHT 13
#define NUM_LEDS WIDTH * HEIGHT

#define DATA_PIN 6

CRGB leds[NUM_LEDS];

void setup() {
  // put your setup code here, to run once:

    FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
    Snake snake(leds, WIDTH, HEIGHT);
    snake.start();
}

