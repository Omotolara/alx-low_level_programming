#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - prints a valid key for the username
 * @argc: the arguments count
 * @argv: the arguments pointer
 *
 * Return: 0 always
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *mask;
	int len = strlen(argv[1]), a, cont;

	mask = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	cont = (len ^ 59) & 63;
	key[0] = mask[cont];

	cont = 0;
	for (a = 0; a < len; a++)
		cont += argv[1][a];
	key[1] = mask[(cont ^ 79) & 63];

	cont = 1;
	for (a = 0; a < len; a++)
		cont *= argv[1][a];
	key[2] = mask[(cont ^ 85) & 63];

	cont = 0;
	for (a = 0; a < len; a++)
	{
		if (argv[1][a] > cont)
			cont = argv[1][a];
	}
	srand(cont ^ 14);
	key[3] = mask[rand() & 63];

	cont = 0;
	for (a = 0; a < len; a++)
		cont += (argv[1][a] * argv[1][a]);
	key[4] = mask[(cont ^ 239) & 63];

	for (a = 0; a < argv[1][0]; a++)
		cont = rand();
	key[5] = mask[(cont ^ 229) & 63];

	key[6] = '\0';
	printf("%s", key);
	return (0);
}
