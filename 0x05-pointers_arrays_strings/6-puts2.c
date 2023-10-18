#include "main.h"
/**
 *puts2 - prints first character followed by new line
 *@str: input
 *Return: print
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;
	char *c = str;
	int o;

	while (*c != '\0')
	{
		c++;
		len++;
	}
	i = len - 1;
	for (o = 0; o <= i; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
