#include "main.h"

/**
 * flip_bits - prints num of bits to be flipped to get to one num from another
 * @n: 1st unsigned long integer number
 * @m: 2nd unsigned long integer number
 * Return: the number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits_count = 0;
	unsigned long int xor_of_nums = n ^ m;

	while (xor_of_nums)
	{
		bits_count = bits_count + (xor_of_nums & 1);
		xor_of_nums >>= 1;
	}

	return (bits_count);
}
