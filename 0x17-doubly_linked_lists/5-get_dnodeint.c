#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the node, starting from 0
 *
 * Return: the nth node. If the node does not exist, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		index--;
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
