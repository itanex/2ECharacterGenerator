/*Brian Wood
Shawn Zilbert
***@@@note: ac table excludes 1 and 2 for dex
types.h*/

struct racetype;
struct jobtype;
struct character;

const int numraces = 6;
const int numjobs = 9;

enum sex  { male, female };
enum jobclass {warrior, wizard, rogue, priest};

struct racetype
{
char name[40];
int baseheightmale;
int baseheightfemale;
int baseweightmale;
int baseweightfemale;
int baseage;
int maxlevel;
int movement;
int minstr, mindex, mincon, minintl, minwis, minchr;
int addstr, adddex, addcon, addintl, addwis, addchr;
};

struct jobtype
{
char name[40];
int minstr, mindex, mincon, minintl, minwis, minchr;
enum jobclass jobclass;
};

struct character
{
 char name[51];
 int race;
 int job;
 enum sex sex;
 int hp, ac;
 int level;
 int height, weight, age, movement;
 int str, dex, con, intl, wis, chr;
 int money;
};

extern racetype allraces[numraces];
extern jobtype alljobs[numjobs];
extern int istype[numjobs][numraces];
