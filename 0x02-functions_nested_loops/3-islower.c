#include "main.h"
/**
 * _islower - This function identifies lower case
 *@c : letters and prints 1 if true and zero if false
 *
 *Return: always 1(true) and 0(false)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
