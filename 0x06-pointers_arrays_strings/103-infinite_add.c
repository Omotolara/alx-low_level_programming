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
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	if (len1 + len2 + 1 > size_r)
	{
		return 0;
	}

	int carry = 0;
	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;

	while (i >= 0 || j >= 0)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		r[k] = (sum % 10) + '0';
		carry = sum / 10;

		i--;
		j++;
		k++;
	}

	if (carry != 0)
	{
		if (k >= size_r - 1)
		{
			return 0;
		}
		r[k] = carry + '0';
		k++;
	}

	r[k] = '\0';

	for (int i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}

	return r;
}
