#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * add_node - Adds a new node at the beginning of the list.
  * @head: Original linked list.
  * @str: String to add to the node.
  *
  * Return: Address of the new list or NULL if failed.
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}

	return (0);
}

/**
  * _strlen - Returns the length of the string.
  * @s: The string to count.
  *
  * Return: String length.
  */

int _strlen(const char *s)
{
	int a = 0;

	while (*s)
	{
		s++;
		a++;
	}

	return (a);
}
