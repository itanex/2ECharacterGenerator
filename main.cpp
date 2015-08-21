/*Brian Wood
Shawn Zilbert
types.h*/

#include "lib.h"

void main()
{
  char ctemp;
  char stemp[20];
  int  ntemp;
  int  maxjob = 0;
  int  x;
  character dante;


   srand (time(0));
		// credits
	cout << "Welcome to Xvictor's AD&D Character Generator!!!!" << endl << endl
		 << "All rights reserved.   Version 0.01  Released: January 5, 1999 "<< endl
		 << "All formulas and other information used herein were created by TSR Inc." << endl
		 << "Thanks for using a Lazarus Production." << endl
		 << "Please report any unusual results or any other bugs to: " << endl
		 << "Email: lord_xvictor@hotmail.com          ICQ#: 7038207" << endl << endl;

	cout << "Enter the name of the character(limit 50): ";
	cin.getline(dante.name, 51, '\n');
	cout << endl;

   inputsex:
     cout << "Input the sex of the character(M or F): ";
	 cin >> stemp;
	 ctemp = tolower(stemp[0]);
   switch(ctemp)
   {
    case 'm':
       dante.sex = male;
       break;
	case 'f':
       dante.sex = female;
       break;
	default:
      cout << endl << "I am not that kind of computer." << endl;
      goto inputsex;
   };
cout << endl;

inputrace:		

		cout << "Choose one of the following:" << endl
			 << "------------------------------------"<< endl;
		for(x=0; x<numraces; x++)
		{
         cout << allraces[x].name <<"-- Enter " << x+1 << endl;
		}
		cout << "------------------------------------"<< endl
			 << "Enter the race of the character: ";
		cin >> ntemp;
		if(ntemp<1 || ntemp>=numraces)
		{
			cout << endl << "Invalid Input" << endl;
			goto inputrace;
		}
		cout << endl;
        dante.race = ntemp-1;


inputjob:

		cout << "Choose one of the following:" << endl
			 << "------------------------------------"<< endl;
		maxjob=0;
		for(x=0; x<numjobs; x++)
		{
         if(istype[x][dante.race])
		 {
         cout << alljobs[x].name <<"-- Enter " << ++maxjob << endl;
		 }
		}
		cout << "------------------------------------"<< endl
			 << "Enter the class of the character: ";
		cin >> ntemp;
		if(ntemp<1 || ntemp>maxjob)
		{
			cout << endl << "Invalid Input" << endl;
			goto inputjob;
		}
		cout << endl;
        dante.job = ntemp-1;

inputlevel:
		
       cout << "Input the level of the character (1-" 
		   << allraces[dante.race].maxlevel << ") ";
	   cin >>ntemp;
		if(ntemp<1 || ntemp>=allraces[dante.race].maxlevel)
		{
			cout << endl << "Invalid Input" << endl;
			goto inputlevel;
		}
     cout << endl;
	 dante.level = ntemp;

	 ///////////////////////////// ALL DATA IS INPUT: CALCULATE STAT DATA    

  dante.str = rollstat(__max(allraces[dante.race].minstr,
	                        alljobs[dante.job].minstr)); 
  dante.str += allraces[dante.race].addstr;

  dante.dex = rollstat(__max(allraces[dante.race].minstr,
	                        alljobs[dante.job].minstr)); 
  dante.dex += allraces[dante.race].addstr;

  dante.con = rollstat(__max(allraces[dante.race].minstr,
	                        alljobs[dante.job].minstr)); 
  dante.con += allraces[dante.race].addstr;

  dante.intl = rollstat(__max(allraces[dante.race].minstr,
	                        alljobs[dante.job].minstr)); 
  dante.intl += allraces[dante.race].addstr;

  dante.wis = rollstat(__max(allraces[dante.race].minstr,
	                        alljobs[dante.job].minstr)); 
  dante.wis += allraces[dante.race].addstr;

  dante.chr = rollstat(__max(allraces[dante.race].minstr,
	                        alljobs[dante.job].minstr)); 
  dante.chr += allraces[dante.race].addstr;

  dante.height = (dante.sex==male)? allraces[dante.race].baseheightmale :
                                    allraces[dante.race].baseheightfemale;

  //add complicated height thing here

  dante.weight = (dante.sex==male)? allraces[dante.race].baseweightmale :
                                    allraces[dante.race].baseweightfemale;

  //add complicated weight thing here

  dante.age = allraces[dante.race].baseage;

  //add complicated weight thing here

  dante.movement = allraces[dante.race].movement;
  
  
  dante.hp = 0; //needs work(these three)
  dante.ac =  0;
  dante.money = 0;
  
}

