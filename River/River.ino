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
// DEFINE VAR _ROWS
// DEFINE VAR _PINS_SZ
// DEFINE VAR _velocities
//
// DEFINE FUNCTION Move_Led_Row (row [int]: row to move, velocity [int]: velocity of the row) [bool]
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

const int _PINS[3] = {3, 4, 5};

const int _ROWS = 3;

const size_t _PINS_SZ = sizeof(_PINS) / sizeof(_PINS[0]);

int _velocities[_ROWS] = {12, -4, -23};

///////////////////////////////////////////////////////////////////////////////////////////////

bool Move_Led_Row(int, int);

///////////////////////////////////////////////////////////////////////////////////////////////

//
// FUNCTION NAME: setup
//
//     ARGUMENT LIST:
//     
//     ARGUMENT	    TYPE    IO	    DESCRIPTION
//     --------	    ----    --	    -----------
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
//     ARGUMENT LIST:
//     
//     ARGUMENT	    TYPE    IO	    DESCRIPTION
//     --------	    ----    --	    -----------
//     
//     RETURN VALUE: void
//

void loop()
{
    // loop code
}

//////////////////////////////////////////////////////////////////////////////////////////////////
