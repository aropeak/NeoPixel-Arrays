#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip(64, 6);

int colors[4][3] {
  {255, 0, 255},
  {0, 0, 255},
  {255, 0, 0},
  {0, 255, 0}
};

int favorite = 0;

void setup() {
  // put your setup code here, to run once:
  strip.begin();
  strip.clear();
  strip.setBrightness(50);

}

void loop() {
  // put your main code here, to run repeatedly:

  strip.setPixelColor(0, 255, 0, 0);

  strip.show();

}
