#include "main.h"
/**
 * char *_strcpy - program copies the string pointed to by src
 * @dest: copies to
 * @src: copies from
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; n < i ; n++)
	{
		dest[n] = src[n];
	}
	dest[i] = '\0';
	return (dest);
}
