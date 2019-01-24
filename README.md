# Biosystem

This repository contains the code for a biosystem that uses Arduinos.

## Overview

|	 Wolves / Coyotes                 |			River			    |					Deer/Bears						  |
|:---------------------------------------:|:-----------------------------------------------:|:-------------------------------------------------------------------------------------------:|
| Initial: Same coyotes no wolves	  | Inital: River unstable / should flow	    | Initial: Deers, few bears									  | 
| Trigger #1: Add wolves, send wolf audio (after trigger #1: delay, send deer)  | Trigger #1: Stable river w/ delay, send beavers | Trigger #1: Fewer deers, move deers, send deer audio, delay, send grass, send fewer coyotes |
| Trigger #2: Fewer coyotes		  | Trigger #2: Add dam, send small animals	    | Trigger #2: More bears (near river)																													|
| Random: Wolf audio trigger		  |	--> Addressable LEDs!			    |											|																																															|

| Songbird / Birds of Prey | Beavers/Dam + Small Animals | Grass/Trees + General |
|:------------------------:|:---------------------------:|:---------------------:|
| Initial: Same songbirds / no birds of prey | Initial: Few small animals  / no beavers | Initial: Few grass and trees |
| Trigger #1: More songbirds / send songbird audio | Trigger #1: Add beavers, dam, send river | Trigger #1: More grass, delay, send river |
| Trigger #2: Add birds of prey, send birds of prey | Trigger #2: More small animals, send small animal audio, send bears, send birds of prey | Random waving |
|    |	 | Sensor: Waving |

