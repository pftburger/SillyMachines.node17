#include <Adafruit_NeoPixel.h>

#define NUM_PIXELS 1

Adafruit_NeoPixel pixels(NUM_PIXELS, D2, NEO_GRB | NEO_KHZ800);

void setup() {
  pixels.begin();
}

void setColor(uint32_t color) {
  for (int i = 0; i < NUM_PIXELS; i++) {
    pixels.setPixelColor(i, color);
    pixels.show();
    delay(50);
  }
}

void loop() {
  setColor(pixels.Color(50, 0, 30));
  delay(1000);
  setColor(pixels.Color(0, 30, 80));
  delay(1000);
  setColor(pixels.Color(20, 0, 50));
  delay(1000);
}
