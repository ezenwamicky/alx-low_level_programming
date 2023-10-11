#include "main.h"
/**
 *main - prints alphabets using function _putchar
 *in lowercase letters
 *
 *Return : always 0 (success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
