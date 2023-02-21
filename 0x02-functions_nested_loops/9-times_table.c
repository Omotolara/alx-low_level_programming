#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * row = row, colm = column, dg = digits of current result
 * Return: times table
 */
void times_table(void)
{
	int row, colm, d;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (colm = 1; colm <= 9; colm++)
		{
			dg = (row * colm);
			if ((dg / 10) > 0)
			{
				_putchar((dg / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((dg % 10) + '0');

			if (colm < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
