#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * list_len - returns the number of elements in a linked list
  * @h: a linked list
  *
  * Return: the number of elements in the linked list
  */
size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t c;

	c = 0;
	current = h;
	while (current != NULL)
	{
		current = current->next;
		c++;
	}

	return (c);
}
