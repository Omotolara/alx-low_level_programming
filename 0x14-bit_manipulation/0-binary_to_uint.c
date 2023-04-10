#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if b is NULL or has chars not 0 or 1
 */
unsigned int binary_to_uint(const char *b);
{
	unsigned int conv_num = 0;
	int schar;

	if (b == NULL)
		return (0);
	for (schar = 0; b[schar] != '\0'; schar++)
	{
		if (b[schar] == '0')
		{
			conv_num *= 2;
		}else if (b[schar] == '1')
		{
			conv_num = (conv_num * 2) + 1;
		}else
		{
			return (0);
		}
	}

	return (conv_num);
}
