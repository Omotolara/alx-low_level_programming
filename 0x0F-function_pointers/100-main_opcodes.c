#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *add;
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	add = (char *)&main;
	bytes = atoi(argv[1]);
	i = 0;
	while (i < bytes - 1)
	{
		printf("%02hhx ", add[i]);
		i++;
	}
	printf("%02hhx\n", add[i]);
	return (0);
}
