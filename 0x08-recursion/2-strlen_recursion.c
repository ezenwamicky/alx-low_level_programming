#include "main.h"
/**
 *_strlen_recursion - prints the length of a string
 *@s: string character value
 *Return: the length of the string 1 (success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
