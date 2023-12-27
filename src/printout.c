#ifndef PRINTOUT
#define PRINTOUT

#include <stdio.h>
#include <string.h>
#include "include.h"

void printout(char * str)
{
	uint_t len = strlen(str);
	for (uint_t i = 0; i <= len; i++)
	{
		printf("%c" , *str);
		str++;
	}
	return;
}


#endif
