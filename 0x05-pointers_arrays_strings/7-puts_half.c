#include "main.h"
/**
 * puts_half - prints the second half of a string
 *@str: input string
 *Return: half of input
 */
void puts_half(char *str)
{
	int i, t, len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	t = (len / 2);

	if ((len % 2) == 1)
		t = ((len + 1) / 2);

	for (i = t; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
