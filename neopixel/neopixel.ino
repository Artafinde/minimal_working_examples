#include <Adafruit_NeoPixel.h>

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1:
#define LED_PIN    6
 
// How many NeoPixels are attached to the Arduino?
#define LED_COUNT 8
 
// Declare our NeoPixel strip object:
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
// Argument 1 = Number of pixels in NeoPixel strip
// Argument 2 = Arduino pin number (most are valid)
// Argument 3 = Pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)



void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'

}

void loop() {
  //////////////////
  //Set colours
  //////////////////
  strip.setPixelColor(0, 255, 0, 255);  //Set pixel 0 to 255 red, 0 green, 255 blue
  strip.setPixelColor(1, 25, 0, 25);  //One tenth brightness of pixel 0

  strip.fill(strip.Color(0,255,255), 2, 3);  //Set pixels 2 through 4 to cyan

  //Push the set colours to the strip
  strip.show();
}
