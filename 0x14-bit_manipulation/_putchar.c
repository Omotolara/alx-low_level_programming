#include "main.h"

/**
 * _write - prints a character
 * @c: the character
 * Return: 1 if successful, -1 if error occurs.
 */
int _write(char c)
{
	return (write(1, &c, 1));
}
