#include "main.h"
/**
 *print_last_digit - this program prints the last
 *digit of a  number
 *@n: used to print integers
 *Return: return the value of "n"
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
