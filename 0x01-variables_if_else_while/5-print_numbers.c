#include <stdio.h>
/**
 *main - prints base 10 numbers starting with zero
 *
 *Return: always 0 (success) and a new line
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");

	return (0);
}
