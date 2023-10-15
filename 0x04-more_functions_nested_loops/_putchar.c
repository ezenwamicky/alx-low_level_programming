#include <unistd.h>
/**
 *_putchar - function name or prototype
 *@c: character to be printed
 *
 *Return: on success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
