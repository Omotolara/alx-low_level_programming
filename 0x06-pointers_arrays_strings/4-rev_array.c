#include "main.h"
#include <stdio.h>
/**
  * reverse_array - reverses the content of an array of integers
  * @a: array of integers
  * @n: number of elements of the array
  *
  * Return: nothing
  */
void reverse_array(int *a, int n)
{
	int *p, b, x, c;

	p = a;

	for (b = 1; b < n; b++)
	{
		p++;
	}

	for (c = 0; c < i / 2; c++)
	{
		x = a[c];
		a[c] = *p;
		*p = x;
		p--;
	}
}
