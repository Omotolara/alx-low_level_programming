#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 ata given index
 * @n: unsigned long integer number
 * @index: index of the bit to be set, starting from 0
 * Return: 1 if it worked, -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(unsigned long int) * 8 <= index)
	{
		return (-1);
	}

	*n &= ~(1 << index);
	return (1);
}
