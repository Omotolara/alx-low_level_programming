#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
  * add_node - adds a new node at the beginning of a list
  * @head: original linked list
  * @str: string to add to the node
  *
  * Return: address of the new list or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}

	return (0);
}

/**
  * _strlen - returns the length of a string
  * @s:string to count
  *
  * Return: length of string
  */
int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
