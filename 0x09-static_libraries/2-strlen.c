 #include "main.h"

/**
 * _strlen - Prints the length of a string
 * @s: string to print
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int longa = 0;

	while (*s != '\0')
	{
		longa++;
		s++;
	}

	return (longa);
}
