#include <unistd.h>
/**
 *_putchar - prints single characters
 *@c : input value
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
