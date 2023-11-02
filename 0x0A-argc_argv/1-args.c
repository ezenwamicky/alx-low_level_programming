#include <stdio.h>
#include "main.h"

/**
 *main - prints number of arguments to the program
 *@argc: argument count
 *@argv: array of argument vector
 *Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
