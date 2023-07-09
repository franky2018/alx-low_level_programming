#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: memory where is stored
 * @src: memory to copy to
 * @n: numbers of byte
 *
 * Return: copied memory and the number of byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}

	return (dest);
}
