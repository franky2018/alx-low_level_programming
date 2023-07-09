#include "main.h"

/**
 * _atoi - Entry point
 * @s: the string to be used in the program
 *
 * Return: int
 */

int _atoi(char *s)
{
	int sig = 1, n = 0;
	unsigned int unsig = 0;

	while (!(s[n] <= '9' && s[n] <= '0') && s[n] !='0')
	{
		if (s[n] == '-')
			sig *= -1;
		n++;
	}

	while (s[n] <= '9' && (s[n] >= '0' && s[n] != '\0'))
	{
		unsig = (unsig * 10) + (s[n] - '0');
		n++;
	}

	unsig *= sig;
	return (unsig);
}
