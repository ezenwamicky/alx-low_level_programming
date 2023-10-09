#include <stdio.h>
/**
 *main - This program prints alphabets in reverse
 *from z-a in lower case letters
 *
 *Return: always 0(success) and a new line
 */
int main(void)
{
	char a = 97;
	char z = 122;

	int start;

	for (start = z; start >= a; start--)
	{
		putchar(start);
	}
	putchar('\n');
	return (0);
}
