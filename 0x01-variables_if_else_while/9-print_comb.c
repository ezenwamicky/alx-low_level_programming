#include <stdio.h>
/**
 *main - This prints numbers from 0 to 9
 *separated by a ', '
 *
 *Return: always 0(success0 and a new line
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
