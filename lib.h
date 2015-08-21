/*Brian Wood
Shawn Zilbert
lib.h*/

#include "types.h"   // global data
#include <fstream.h> // files
#include <iostream.h>// cout
#include <time.h>    // generate seed for srand
#include <stdlib.h>  // random number generator
#include <ctype.h>   // tolower

int rolldie(int sides);
int rolldice(int sides, int times);
int rollstat(int min);