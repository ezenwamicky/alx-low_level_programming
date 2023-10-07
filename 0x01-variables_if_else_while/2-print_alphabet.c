#include <stdio.h>
/**
 *main - A program that uses putchar to print alphabet
 *a-z in a while loop
 *
 *Return: always 0 (success) and a new line
 */
int main(void)
{
	char a = 97;
	char z  = 122;

	char start = a;

	while (start <= z)
	{
		putchar(start);
		start++;
	}

	putchar('\n');

	return (0);
}
