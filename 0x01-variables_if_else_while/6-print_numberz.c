#include <stdio.h>
/**
 *main - prints base 10 numbers starting with zero
 *using putchar
 *
 *Return: always 0 (successful)andd a new line
 */
int main(void)
{
	int start;

	for (start = 0; start <= 9; start++)
	{
		putchar(start + '0');
	}
	putchar('\n');

	return (0);
}
