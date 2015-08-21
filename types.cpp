/*Brian Wood
Shawn Zilbert
types.h*/

#include "types.h"

racetype allraces[numraces] =
{  //           HM HF  WM  WF | A ML MV|S D  C I W C | S  D  C  I  W  C   
  {"Dwarf    ", 43,41,130,105, 40,20, 6,8,3,11,3,3,3,  0, 0, 1, 0, 0,-1},
  {"Elf      ", 55,50, 90, 70,100,20,12,3,6, 7,8,3,8,  0, 1,-1, 0, 0, 0},
  {"Gnome    ", 38,36, 72, 68, 60,20, 6,6,3, 8,6,3,3,  0, 0, 0, 1,-1, 0},
  {"Halfelf  ", 60,58,110, 85, 15,20,12,3,6, 6,4,3,3,  0, 0, 0, 0, 0, 0},
  {"Halfling ", 32,30, 52, 48, 20,20, 6,7,7,10,6,3,3, -1, 1, 0, 0, 0, 0},
  {"Human    ", 60,59,140,100, 15,40,12,0,0, 0,0,0,0,  0, 0, 0, 0, 0, 0}
};

jobtype alljobs[numjobs] =
{               //  S   D   C   I   W   C  JC
  {"Fighter     ",  9,  0,  0,  0,  0,  0, warrior},
  {"Ranger      ", 13, 13, 14,  0, 14,  0, warrior},
  {"Paladin     ", 12,  0,  9,  0, 13, 17, warrior},
  {"Mage        ",  0,  0,  0,  9,  0,  0, wizard},
  {"Illusionist ",  0, 16,  0,  0,  0,  0, wizard},
  {"Cleric      ",  0,  0,  0,  0,  9,  0, priest},
  {"Druid       ",  0,  0,  0,  0, 12, 15, priest},
  {"Thief       ",  0,  9,  0,  0,  0,  0, rogue},
  {"Bard        ",  0, 12,  0, 13,  0, 15, rogue}
};

int istype[numjobs][numraces] =
{// Dw El Gn He Ha Hu
  { 1, 1, 1, 1, 1, 1 }, // Fighter
  { 0, 1, 0, 1, 0, 1 }, // Ranger
  { 0, 0, 0, 0, 0, 1 }, // Paladin
  { 0, 1, 0, 1, 0, 1 }, // Mage
  { 0, 0, 1, 0, 0, 1 }, // Illusionist
  { 1, 1, 1, 1, 1, 1 }, // Cleric
  { 0, 0, 0, 1, 0, 1 }, // Druid
  { 1, 1, 1, 1, 1, 1 }, // Thief
  { 0, 0, 0, 1, 0, 1 }  // Bard
};

