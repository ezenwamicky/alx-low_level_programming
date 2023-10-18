 #include <unistd.h>
/**
 *_putchar - writes the character c to stdoutput
 *c is the character to print
 *Return: 0 success 1.
 *0 error, -1 is returned, and error is set properly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
 }
