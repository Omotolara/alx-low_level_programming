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
	int total, i;
	char *p;
	int num;

	total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				total += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);
}
