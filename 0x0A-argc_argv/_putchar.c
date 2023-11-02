#include <stdio.h>
#include "main.h"

/**
 *_putchar - prints stdout with characters
 *@c: prints to character
 *Return: Always 1 (success) 
 *with error, -1 will be returned and error resolved
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
