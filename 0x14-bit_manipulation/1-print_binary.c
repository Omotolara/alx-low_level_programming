#include "main.h"

/**
 * print_binary - prints the binary representation of a num.
 * @n: unsigned long integer number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int holder = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (holder > 0)
	{
		_putchar((n & holder) ? '1' : '0');
		holder >>= 1;
	}
}
