#include <FastLED.h>

#define DATA_PIN 13
#define NUM_LEDS 16

int STEP = 6;

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812, DATA_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(255);
  FastLED.clear();

  FastLED.show();
  Serial.begin(9600);
  pinMode(bluePin, HIGH);
}

void loop() {
  Rainbow();
  }

void Rainbow(){
  int currentHue = 0;
  
  for(int i = 0;){
    leds[i] = (currentHue, 255, 255);

    currentHue += STEP;
    delay(5);
    FastLED.show();
  }
}
