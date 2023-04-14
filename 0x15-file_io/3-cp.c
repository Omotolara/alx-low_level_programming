#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	ssize_t brd, bwr;
	char buff[BUFF_SIZE];
	int file_src, file_dest;
	mode_t prms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_src = open(argv[1], 0_RDONLY);
	if (file_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, prms);
	if (file_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((brd = read(file_src, buff, BUFF_SIZE)) > 0)
	{
		bwr = write(file_dest, buff, brd);
		if (brd != bwr)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	if (brd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_src);
		exit(100);
	}
	if (close(file_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_dest);
		exit(100);
	}

	return (0);
}
