#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of a list
 * @head: head of the list
 * @index: node to stop
 * Return: NULL if node does not exist, else pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
