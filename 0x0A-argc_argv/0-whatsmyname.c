#include <stdio.h>
#include "main.h"

/**
 *main - function that prints the name of program
 *@argc: argument count
 *@argv: array of argument vector
 *Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
