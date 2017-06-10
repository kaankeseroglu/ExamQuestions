#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
int p;
int b;
char osman;	BURASI GLOBAL VARIABLE : p,b,osman				
*/

int ebob(int a, int b)// a ve b parametre//
{
	int tmp;		 // tmp ve r local variable//
	int r;

	if (a<b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}

	while(1)
	{
	r = a%b;
	if (r == 0)
	{
		return b;
	}

	else
	{
		a = b;
		b = r;
	}
	}
}