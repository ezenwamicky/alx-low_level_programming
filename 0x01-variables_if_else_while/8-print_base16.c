#include <stdio.h>
/**
 *main - This prints all hexadecimals from 0 to f
 *in lowercase letters
 *
 *Return: always 0(success) and a new line
 */
int main(void)
{
	int num0 = 0;
	int num9 = 9;
	char a = 97;
	char f = 102;

	int number;
	int letter;

	for (number = num0; number <= num9; number++)
	{
		putchar(number + '0');
	}
	for (letter = a; letter <= f; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
