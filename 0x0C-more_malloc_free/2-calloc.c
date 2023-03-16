#include "main.h"

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 * @nmemb: number of elements
 * @size: size of each element
 * Return: Null if error, pointer to allocated memory if otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int ar_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ar_size = nmemb * size;
	ar = malloc(ar_size);
	if (ar == NULL)
		return (NULL);
	while (i < ar_size)
	{
		ar[i] = 0;
		i++;
	}

	return (ar);
}
