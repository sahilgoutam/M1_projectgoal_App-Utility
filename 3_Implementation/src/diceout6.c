#include <stdio.h>
#include"dice.h"
char *diceout6()
{
	char print[100]="Roll=6: You have earned a chance to play one more time.";
	
	printf("%s\n\n",print);
	char *cp=print;
	return cp;
}