#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of a coin to
 * make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if the argument is not exactly one,
 * otherwise 0
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			coins -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			coins -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			coins -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			coins -= 2;
			continue;
		}
		cents--;
	}

	printf("%d\n", coins);
	return (0);
}
