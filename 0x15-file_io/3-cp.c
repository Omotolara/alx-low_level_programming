#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int file_src, file_dest, brd, bwr;
	char buff[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(ERR, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_src = open(argv[1], O_RDONLY);
	if (file_src == -1)
		dprintf(ERR, "Error: Can't read from file %s\n", argv[1]), exit(98);
	file_dest = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_dest == -1)
		dprintf(ERR, "Error: Can't write to %s\n", argv[2]), exit(99);
	brd = read(file_src, buff, BUFF_SIZE);
	while (brd > 0)
	{
		bwr = write(file_dest, buff, brd);
		if (bwr == -1)
			dprintf(ERR, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (brd == -1)
		dprintf(ERR, "Error: Can't read from file %s\n", argv[1]), exit(98);
	if (close(file_src) == -1)
		dprintf(ERR, "Error: Can't close fd %d\n", file_src), exit(100);
	if (close(file_dest) == -1)
		dprintf(ERR, "Error: Can't close fd %d\n", file_dest), exit(100);

	return (0);
}
