#include "main.h"

/* 
 * infinite_add - adds two numbers
 * @n1: 1st number
 * @n2: 2nd number
 * @r: buffer to store result
 * @size_r: buffer size
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int buff = 0, a = 0, b = 0, dg = 0;
	int num1 = 0, num2 = 0, total = 0;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + b) != '\0')
		b++;
	a--;
	b--;
	if (b >= size_r || a >= size_r)
		return (0);
	while (b >=0 || a >=0 || buff == 1)
	{
		if (a < 0)
			num1 = 0;
		else
			num1 = *(n1 + a) - '0';
		if (b < 0)
			num2 = 0;
		else
			num2 = *(n2 + b) - '0';
		total = num1 + num2 + buff;
		if (total >= 10)
			buff = 1;
		else
			buff = 0;
		if (dg >= (size_r - 1))
			return (0);
		*(r + dg) = (total % 10) + '0';
		dg++;
		b--;
		a--;
	}
	if (dg == size_r)
		return (0);
	*(r +dg) = '0';
	rev_string(r);

	return (r);
}
