#include "main.h"

/**
  * _memcpy - copies memory area
  * @dest: destination
  * @src: source
  * @n: number of bytes to copy from memory area
  *
  * Return: destination
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
