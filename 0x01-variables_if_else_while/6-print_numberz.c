#include <stdio.h>
/**
 *main - prints base 10 numbers starting with zero
 *using putchar
 *
 *Return: always 0 (successful)andd a new line
 */
int main(void)
{
	int first = 0;
	int last = 9;

	char start;

	for (start = first; start <= last; start++)
	{
		putchar(start + '0');
	}
	putchar('\n');

	return (0);
}
