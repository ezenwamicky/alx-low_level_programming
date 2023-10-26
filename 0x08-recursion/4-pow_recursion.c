#include "main.h"
/**
 *_pow_recursion - finds the value of x raised to the power y
 *@x: integer value
 *@y: power input integer value
 *Return: x^y and -1 if y negative integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
