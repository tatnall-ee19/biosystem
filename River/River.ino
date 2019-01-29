// NAME: River.ino
//
// PURPOSE: Contains the code for the river in the biosystem
//
// FILE REFERENCES:
// Name		Description
// ----		-----------
// Arduino.h	Internal built-in reference
// 
// EXTERNAL VARIABLES:
// Source:  <Arduino.h>
// 
// Name	    Type	I/O	DESCRIPTION
// ----	    ----	---	-----------
// HIGH	    int		Input	Returns 0 for positive signal or ON
// LOW	    int		Input	Returns 1 for negative signal or OFF
//
//  
// ABNORMAL TERMINATION CONDITIONS, ERROR AND WARNING MESSAGES:
//  none
//
// ASSUMPTIONS, CONSTRAINTS, RESTRICTIONS: none
// 
// NOTES: none
//
// REQUIREMENTS/FUNCTIONAL SPECIFICATIONAL REFERENCES: none
//
// GLOBAL VARIABLES:
//
// Variable	    Type	    Description
// --------	    ----	    -----------
// _PINS	    const int[3]    Pin numbers
// _ROWS	    const int	    Number of rows
// _PINS_SZ	    const size_t    Size of _PINS
// _velocities	    int[_ROWS]	    controls the velocity of each induvidual row of the river
// 
// ALGORITHM: 
//
// DEFINE VAR _PINS
// DEFINE VAR _RESET_PIN
// DEFINE VAR _ROWS
// DEFINE VAR _PINS_SZ
// DEFINE VAR _velocities
//
// DEFINE FUNCTION Change_LED_State (first_state [int]: First state we want the LED to be in, 
//				    second_state [int]: Second state we want the LED to be in) [void]
// DEFINE FUNCTION Move_LED_Row (row [int]: row to move, velocity [int]: velocity of the row) [void]
// DEFINE FUNCTION Flow (variance [int]: how differing we want the river to flow) [void]
// DEFINE FUNCTION Stablize () [void]
// DEFINE FUNCTION Unstablize () [void]
// DEFINE FUNCTION Original_State () [void]
// DEFINE FUNCTION TFirst_State () [void]
// DEFINE FUNCTION TSecond_State () [void]
// DEFINE FUNCTION Reset () [void]
//
// FUNCTION setup (void) [void]
//  LOOP OVER _PINS:
//	CALL pinMode(_PINS, HIGH)
//  END
//  CALL Serial.begin(9600)
// END
//
// FUNCTION loop (void) [void]
// END
//

static const int _PINS[3] = {3, 4, 5};

static const int _RESET_PIN = 0;

static const int _ROWS = 3;

static const size_t _PINS_SZ = sizeof(_PINS) / sizeof(_PINS[0]);

static int _velocities[_ROWS] = {12, -4, -23};

///////////////////////////////////////////////////////////////////////////////////////////////

static void Change_LED_State(int, int);
static void Move_LED_Row(int, int);
static void Flow(int);
static void Stablize(void);
static void Unstablize(void);
static void Original_State(void);
static void TFirst_State(void);
static void TSecond_State(void);
static void Reset(void);

///////////////////////////////////////////////////////////////////////////////////////////////

//
// FUNCTION NAME: setup
//
//     ARGUMENT LIST: none
//     
//     RETURN VALUE: void
//

void setup() 
{

    //
    // LOCAL VARIABLES:
    // 
    // Name	Type	    Description
    // ----	----	    -----------
    // i	size_t	    iterator variable for setting up pins
    //

    Serial.begin(9600);
    for (size_t i = 0; i < _PINS_SZ - 1; i++)
	pinMode(_PINS[i], INPUT);

}

////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////

//
// FUNCTION NAME: loop
//
//     ARGUMENT LIST: none
//     
//     RETURN VALUE: void
//

void loop()
{
    // loop code
}

//////////////////////////////////////////////////////////////////////////////////////////////////
