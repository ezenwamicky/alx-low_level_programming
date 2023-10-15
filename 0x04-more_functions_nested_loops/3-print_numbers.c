#include "main.h"
/**
 *print_numbers - prints numbers with putchar
 *
 *Return: nothing
 */
void print_numbers(void)
{
	int c;

	{
		for (c = 48; c <= 57; c++)
		_putchar(c);
	}
	_putchar('\n');
}
