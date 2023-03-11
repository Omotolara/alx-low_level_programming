#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the destination
 * @src: the source
 * @n: number of characters to copy
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int d;

	for (d = 0; d < n && src[d] != '\0'; d++)
		dest[d] = src[d];

	for (; n > d; d++)
		dest[d] = '\0';

	return (dest);
}
