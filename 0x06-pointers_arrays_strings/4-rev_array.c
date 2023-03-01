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
	int j;
	int w;

	for (j = 0; j < (n / 2); j++)
	{
		w = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = w;
	}
}
