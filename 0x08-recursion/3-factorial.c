#include "main.h"
/**
 *factorial - prints the factorial of a given number
 *@n: integer input value
 *Return: the factorial of n or -1 on error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
