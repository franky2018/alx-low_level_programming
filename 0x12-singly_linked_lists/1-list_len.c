#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * list_len - Show numbers of elements in the list.
  * @h: linked list.
  *
  * Return: Number of elements in the list.
  */

size_t list_len(const list_t *h)
{
	size_t counts = 0;

	while (h)
	{
		h = h->next;
		counts++;
	}

	return (counts);
}
