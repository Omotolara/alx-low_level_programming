#include "lists.h"

/**
 * sum_listint - sums all elements in a list
 * @head: head of the list
 * Return: sum of all elements
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
