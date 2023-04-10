#include "main.h"

/**
 * _putchar - prints a character
 * @c: the character
 * Return: 1 if successful, -1 if error occurs.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
