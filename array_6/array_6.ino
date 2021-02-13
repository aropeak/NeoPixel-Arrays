#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip(64, 6);

void setup() {
  // put your setup code here, to run once:
  strip.begin();
  strip.clear();
  strip.setBrightness(50);

}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i = 1; i < strip.numPixels(); i=i+2) {
    strip.setPixelColor(i, 255, 0, 0);
    strip.show();
  }

}
