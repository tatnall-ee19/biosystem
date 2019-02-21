/* River.ino - Contains the code for the river in the biosystem */
#define LED_PIN 5
#define	NUM_LEDS 256
#define LED_TYPE NEOPIXEL
#define BRIGHTNESS 40
#define COLOR_ORDER RGB 

#include <FastLED.h>

/* Global Variables */
static const int gRESET_PIN = 0;
CRGB gLEDS[NUM_LEDS];

/* Function definitons */
static int Find_River_Color(int, int, int);
static void Change_River_Color(int, int);
static void Move_LED_Row(int, int);
static void Flow(int);
static void Stablize(void);
static void Unstablize(void);
static void Original_State(void);
static void TFirst_State(void);
static void TSecond_State(void);
static void Reset(void);

/**
 * Function used for setting up variables/pins
 */
void setup() 
{
    Serial.begin(9600);
    delay(300);
    FastLED.addLeds<LED_TYPE, LED_PIN>(gLEDS, NUM_LEDS).setCorrection(TypicalLEDStrip);
    FastLED.setBrightness(BRIGHTNESS);
}

void loop()
{
    for(size_t i = 0; i <= NUM_LEDS; i++) {
	gLEDS[i] = 0x0033cc; // Ultramarine
	delay(10);
    }
    FastLED.show();

    for(size_t i = 0; i <= NUM_LEDS; i++) {
	gLEDS[i] = 0x0066cc;
	delay(10);
    }
    FastLED.show();

    delay(1);
}


