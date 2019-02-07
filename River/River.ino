/* River.ino - Contains the code for the river in the biosystem */
#define	NUM_LEDS 2

#include <FastLED.h>

/* Global Variables */
static const int _APINS[3] = {A0, A1, A2};
static const int _RESET_PIN = 0;
static const int _ROWS = 3;
static const size_t _PINS_SZ = sizeof(_APINS) / sizeof(_APINS[0]);
static int _velocities[_ROWS] = {12, -4, -23};
static int _colors[3] = {1, 2, 3};

/* Function definitons */
static int Find_River_Color(int, int, int);
static void Change_River_Color(int, int, int);
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
    for (size_t i = 0; i < _PINS_SZ - 1; i++) {
	pinMode(_APINS[i], INPUT);
    }
}

void loop()
{
    Change_River_Color(_colors, _APINS);
    delay(50);
}

static int Find_River_Color(int pin_one, int pin_two, int pin_three)
{
    int *color = malloc(3 * sizeof(int));
    color[0] = digitalRead(pin_one); 
    color[1] = digitalRead(pin_two);
    color[2] = digitalRead(pin_three);
    return color;
}

static void Change_River_Color(int *color, int *pins)
{
    size_t color_size = sizeof(color) / sizeof(color[0]);
    size_t pins_size = sizeof(pins) / sizeof(pins[0]);

    int *r, *g, *b = malloc(sizeof(int));

    for (size_t i = 0; i <= color_size; i++) {
	if (i = 0) 
	    *r = color[i];
	if (i = 1)
	    *g = color[i];
	if (i = 2)
	    *b = color[i];
    }

    for (int j = 0; j <= 255; j+=4) {
	analogWrite(*b, j);
	delay(50);
    }
    for (int k = 255; k >= 0; k--) {
	analogWrite(*b, k);
	delay(50);
    }
}
