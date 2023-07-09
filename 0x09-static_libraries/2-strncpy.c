#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: entered value
 * @src: entered value
 * @n: entered value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest++;
		j++;
	}

	while (j < n)
	{
		dest++;
		j++;
	}

	return (dest);
}
