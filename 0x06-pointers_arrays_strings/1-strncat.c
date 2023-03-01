#include "main.h"

/**
 * _strncat - concatenates two strings, uses at most n bytes from src
 * @dest: the destination
 * @src: the source
 * @n: number of bytes from src
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int d, s;

	for (d = 0; dest[d] != '\0'; d++)
		;

	for (s = 0; src[s] != '\0' && n > 0; s++, n--, d++)
	{
		dest[d] = src[s];
	}
	return (dest);
}
