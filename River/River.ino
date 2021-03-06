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
    /* Background */
    background();    
    Stablize();   
    delay(100);
    Unstablize();
}

static void background()
{
   for (size_t i = 0; i <= NUM_LEDS; i++) {
	gLEDS[i] = 0x0033cc;
    } 
    FastLED.show();
}

/*
    Name: Find_River_Color()
    Description: Finds river color
    Returns: int[]
*/
static CRGB *Find_River_Color() 
{
    CRGB *colors = malloc(sizeof(int) * 2);
    colors[0] = gLEDS[0];

    for (int i = 0; i <= NUM_LEDS; i++) {
	if ((gLEDS[i] != colors[0])) {
	    colors[1] = gLEDS[i];
	    return colors;
	}
    }
}

/*
    Name: Change_River_Color()
    Description: Finds river color
    Returns: void
*/
static void Change_River_Color(unsigned int start_pos, unsigned int end_pos, CRGB new_color) {
    if (end_pos > NUM_LEDS)
	return;

    for (int i = start_pos; i <= end_pos; i++) {
	gLEDS[i] = new_color;
    }
}

static void Change_River_Color(CRGB new_color) {
    Change_River_Color(0, NUM_LEDS, new_color);
}

/*
    Name: Move_LED_Row()
    Description: Move the LED Row
    Returns: void
*/
static void Move_LED_Row_Fwd(int delay_time, CRGB color) {
   for(size_t i = 0; i <= NUM_LEDS; i++) {
	gLEDS[i] = color; 
	if (i % 7 == 0) {
	    FastLED.show();
	    delay(delay_time);
	} 
    }
}

static void Move_LED_Row_Bkwd(int delay_time, CRGB color) {
    for(size_t i = NUM_LEDS; i >= 0; i--) {
	gLEDS[i] = color; 
	if (i % 7 == 0) {
	    FastLED.show();
	    delay(delay_time);
	} 
    }
}

static void Stablize() {
    Move_LED_Row_Fwd(10, 0xffffff);
}

static void Unstablize() {
    // Fix random function
    Move_LED_Row_Bkwd(random(1, 100), 0xff0000);
}
