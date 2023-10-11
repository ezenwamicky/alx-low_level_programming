#include "main.h"
/**
 *print_sign - This is the name of function prototype
 *@n : the value of number it prints
 *
 *Return: returns 1 if n > 0, and 0 if n == 0 or otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
