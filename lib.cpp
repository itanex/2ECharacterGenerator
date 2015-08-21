/*Brian Wood
Shawn Zilbert
lib.cpp*/

#include "lib.h"

int rolldie(int sides)
{
 return rand()%sides +1;
}

int rolldice(int sides, int times)
{
 int sum = 0;
 int x;
  for(x=0;x<times;x++)
  {
   sum += rolldie(sides);
  }
 return sum;
}

int rollstat(int min)
{
 int val = rolldice(6,3);
 while(val <= min)
	 val = rolldice(6,3); 
 return val;
}