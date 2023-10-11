#include "main.h"
/**
 *print_alphabet_x10 - This function prints alphabets
 * ten times in new lines
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	char n, c;

	n = 0;
	while (n < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		n++;
	}
}
