#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head of a list and returns head node's data
 * @head: head of the list
 * Return: head node's data, 0 if empty.
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *current, *tmp;

	if (head == NULL)
		return (0);
	tmp = current = *head;
	if (*head)
	{
		i = current->n;
		*head = current->next;
		free(tmp);
	}
	else
		i = 0;
	return (i);
}
