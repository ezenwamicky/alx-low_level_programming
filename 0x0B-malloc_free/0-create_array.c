#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of size 'size' and assign char c
 * @size: size of array
 * @c: assigned char
 * Description: create array of size size and assign char c
 * Return: array pointer , NULL if failed
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}