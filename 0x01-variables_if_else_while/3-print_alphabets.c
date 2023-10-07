#include <stdio.h>
/**
 *main - prints lower and upper case letters from
 *a-z and A-Z in a FOR loop
 *
 *Return: always 0 (success) and a new line
 */
int main(void)
{
	char a = 97;
	char A = 65;
	char z = 122;
	char Z = 90;

	int lower;
	int upper;

	for (lower = a; lower <= z; lower++)
	{
		putchar(lower);
	}

	for (upper = A; upper <= Z; upper++)
	{
		putchar(upper);
	}

	putchar('\n');
	return (0);
}
