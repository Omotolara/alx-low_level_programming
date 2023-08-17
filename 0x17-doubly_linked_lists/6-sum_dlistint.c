#include "lists.h"

/**
 * sum_dlistint - sums all the data (n) of a dlistint_t list
 * @head: pointer to the head of the  list
 * Return: 0 if list is emppty, else the sum of all the data (n) of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
