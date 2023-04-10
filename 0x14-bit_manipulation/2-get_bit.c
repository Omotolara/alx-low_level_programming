#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long integer number
 * @index: index of the bit to be gotten
 * Return: value of the bit, or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(unsigned long int) * 8 <= index)
		return (-1);

	return ((n >> index) & 1);
}
