#include <stdio.h>
/**
 *main - prints lower case alphabets with the
 *exerption of e and q
 *
 *Return: always 0 and a new line
 */
int main(void)
{
	char a = 97;
	char z = 122;

	int lower;

	for (lower = a; lower <= z; lower++)
	{
		if (101 != lower && 113 != lower)
		{
			putchar(lower);
		}
	}
	putchar('\n');
	return (0);
}
