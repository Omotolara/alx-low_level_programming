#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *p = (char *)&num;

	if ((int)*p == 0)
	{
		return (0);
	}
	else if ((int)*p == 1)
	{
		return (1);
	}
}
