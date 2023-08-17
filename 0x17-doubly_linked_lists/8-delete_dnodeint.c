#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeds, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cont = *head;

	if (*head == NULL)
		return (-1);

	while (index != 0)
	{
		index--;
		if (cont == NULL)
			return (-1);
		cont = cont->next;
	}

	if (cont == *head)
	{
		*head = cont->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		cont->prev->next = cont->next;
		if (cont->next != NULL)
			cont->next->prev = cont->prev;
	}

	free(cont);
	return (1);
}
