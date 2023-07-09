#include "main.h"

/**
 * _memset - Entry point.
 * @s: starting address of memory to be filled
 * @b: the define value
 * @n: number of byte to be changed
 *
 * Return: change array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
