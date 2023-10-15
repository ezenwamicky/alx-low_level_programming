#include "main.h"
/**
 *_isdigit - prints numbbers 0 through 9
 *@c: input integer
 *Return: Always 1 if true and 0 if false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
