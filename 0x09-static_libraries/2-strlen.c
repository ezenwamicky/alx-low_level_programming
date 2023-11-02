#include "main.h"
/**
 * _strlen - the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
        	int longint = 0;
 
        	while (*s != '\0')
        	{
                    	longint++;
                    	s++;
        	}
 
        	return (longint);
}
