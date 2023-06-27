#include "main.h"
/**
 * puts2 - Prints every other character of the string
 * @str: The string to be treated
 * Return: void
 */
void put2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
