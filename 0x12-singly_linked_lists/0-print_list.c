#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Prints elements of the list.
 * @h: Linked list.
 *
 * Return: Numbers of Nodes.
 */

size_t print_list(const list_t *h)
{
	size_t counts = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		counts++;
	}

	return (counts);
}
