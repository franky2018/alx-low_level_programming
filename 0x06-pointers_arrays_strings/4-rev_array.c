#include "main.h"
/**
 * reverse_array - Reverses the content of an array integers.
 * @a: The array of integer to be reveesed.
 * @n: The nimber of element in the array.
 *
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index++)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
