#include "main.h"
/**
 *binary_to_uint - convverts a binary number to an usigned int
 *@b: string to be converted as binary
 *Return: returns always 0 if NULL and result on success
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			result = (result << 1) + (*b - '0');
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (result);
}
