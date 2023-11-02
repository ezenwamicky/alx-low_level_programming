#include "main.h"
/**
 * _strncat - function concatenate two strings
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int a;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
