/* River.ino - Contains the code for the river in the biosystem */

#define	NUM_LEDS 2

#include <FastLED.h>

/* Global Variables */
static const int _DPINS[3] = {3, 5, 6};
static const int _APINS[3] = {A0, A1, A2};
static const int _RESET_PIN = 0;
static const int _ROWS = 3;
static const size_t _PINS_SZ = sizeof(_APINS) / sizeof(_APINS[0]);
static int _velocities[_ROWS] = {12, -4, -23};

/* Function definitons */
static int Find_River_Color();
static void Change_River_Color();
static void Move_LED_Row(int, int);
static void Flow(int);
static void Stablize(void);
static void Unstablize(void);
static void Original_State(void);
static void TFirst_State(void);
static void TSecond_State(void);
static void Reset(void);

/**
 * function used for setting up variables/pins
 */
void setup() 
{
    Serial.begin(9600);
    for (size_t i = 0; i < _PINS_SZ - 1; i++) {
	pinMode(_DPINS[i], INPUT);
	pinMode(_APINS[i], INPUT);
    }
}

void loop()
{

}

static int Find_River_Color() {
    int *color = malloc(3 * sizeof(int));
    color[0] = digitalRead(_DPINS[0]); 
    color[1] = digitalRead(_DPINS[1]);
    color[2] = digitalRead(_DPINS[2]);
    return color;
}

