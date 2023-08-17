#include "lists.h"

/**
 * print_dlistint - returns the number of elements in a linked list
 * @h: the head of the list
 *
 * Return: the number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
        size_t count_node = 0;

        while (h)
        {
                h = h->next;
                count_node++;
        }

        return (count_node);
}
