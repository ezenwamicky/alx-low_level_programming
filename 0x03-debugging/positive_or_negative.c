#include "main.h"
/**
 *positive_or _negative - this function prints positive
 *or negative numbers
 *
 *Return : always 0 and a new line
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
