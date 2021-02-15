#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip(64, 6);

int test = 0;

void setup() {
  // put your setup code here, to run once:
  strip.begin();
  strip.clear();
  strip.setBrightness(50);

}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, Wheel(test));
    strip.show();
  }
  test = (test + 1) % 255;

}

uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if (WheelPos < 85) {
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if (WheelPos < 170) {
    WheelPos -= 85;
    return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}
