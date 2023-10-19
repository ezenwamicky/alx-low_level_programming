#include "main.h"
/**
 * _strncat - concatenates two strings with the most n byte
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: void (success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int t;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	t = 0;
	while (t < n && src[t] != '\0')
	{
		dest[i] = src[t];
		i++;
		t++;
	}
	dest[i] = '\0';
	return (dest);
}
