#include "main.h"

/**
  * _strcpy - copies a string pointed to by src
  * @dest: value of destination
  * @src: value of source
  *
  * Return: the value of destination
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
