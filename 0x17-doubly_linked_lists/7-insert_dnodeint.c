#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index of the new node.
 * @n: the integer the new node will hold
 *
 * Return: NULL if the function fails, else the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cont = *h, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		idx--;
		cont = cont->next;
		if (cont == NULL)
			return (NULL);
	}

	if (cont->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = cont;
	new_node->next = cont->next;
	cont->next->prev = new_node;
	cont->next = new_node;

	return (new_node);
}
