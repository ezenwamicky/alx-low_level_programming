#include <stdio.h>
/**
 *main - entry point of function main to display
 *
 *Return: Always return 0 on uccess
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int llt;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned int)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned int)sizeof(i));
	printf("Size of an long int %lu byte(s)\n", (unsigned int)sizeof(li));
	printf("Size of an long long int %lu byte(s)\n", (unsigned int)sizeof(llt));
	printf("Size of a float %lu byte(s)\n", sizeof(float));
	return (0);
}
