#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the addition of positive numbers,followed by a new line
 * @argc: the argument count
 * @argv: the argument vector
 * Description: print 0 if no number is passed
 * Print Error if one of the numbers is non-digit
 * Return: 1 if error, 0 if otherwise
 */

int main(int argc, char *argv[])
{
	int total, count;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &p, 10);
	count = 0;

	if (!*p)
	{
		while (total > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (total >= cents[i])
				{
					count += total / cents[i];
					total = total % cents[i];
				}
			}
		}
		if (total == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
