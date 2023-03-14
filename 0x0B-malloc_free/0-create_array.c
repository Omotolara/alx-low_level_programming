#include "mainn.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initializes it with a spec char
 * @size: size of the array
 * @c: the specific char
 * Return: pointer to the array, or NULL if error
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
