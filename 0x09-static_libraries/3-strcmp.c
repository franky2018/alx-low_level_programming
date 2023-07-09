#include "main.h"

/**
 * _strcmp - Compares string values
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: s1[k] - s2[k]
 */

int _strcmp(char *s1, char *s2)
{
	int k = 0;

	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] - s2[k]);
		}

		k++;
	}

	return (0);
}
