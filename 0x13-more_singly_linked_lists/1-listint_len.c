#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked list
 * @h: head of the linked list
 *
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			count++;
		}
	}

	return (count);
}
