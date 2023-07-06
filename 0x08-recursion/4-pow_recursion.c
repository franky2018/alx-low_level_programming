#include "main.h"

/**
 * _pow_recursion - Returns the value of x raise to the power of y
 * @x: The value to be multiply
 * @y: The times to multiply the value
 *
 * Return: the value multiply y times
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
