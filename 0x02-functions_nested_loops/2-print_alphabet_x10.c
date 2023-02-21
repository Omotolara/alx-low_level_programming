#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int letter, times;

	times = 0;

	while (times < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		times++;
		_putchar('\n');
	}
}
