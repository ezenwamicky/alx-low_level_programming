#include "main.h"
/**
 *_isalpha - function prototype name and definition
 *@c : used to print alphabets
 *
 *Return: returns 1 if c is a letter and 0 if not
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
