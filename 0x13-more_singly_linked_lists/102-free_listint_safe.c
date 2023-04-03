#include "lists.h"
#include <stdlib.h>
#include<stdio.h>

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *hold;
	size_t count;

	count = 0;
	current = *h;
	while (current != NULL)
	{
		count++;
		hold = current;
		current = current->next;
		free(hold);

		if (hold < current)
			break;
	}
	*h = NULL;

	return (count);
}
