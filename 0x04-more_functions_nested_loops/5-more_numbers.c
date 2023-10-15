#include "main.h"
/**
 *more_numbers - prints numbers from 0 to 14 for ten times
 *
 *Return: Nothing
 */
void more_numbers(void)
{
	int line, num;

	line = 0;
	while (line < 10)
	{
		num = 0;
		while (num < 15)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
			num++;
		}
		_putchar('\n');
		line++;
	}
}
