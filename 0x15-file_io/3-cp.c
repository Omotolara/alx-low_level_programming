#include "main.h"

/**
 * _stderr - prints error
 * @cd: error code
 * @msg: error message
 * @file_desc: file descriptor
 * Return: nothing
 */
void _stderr(int cd, char *msg, int file_desc)
{
	dprintf(STDERR_FILENO, msg, file_desc);
	exit(cd);
}

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
		_stderr(97, "Usage: cp file_from file_to\n", 0);
	file_src = open(argv[1], O_RDONLY);
	if (file_src == -1)
		_stderr(98, "Error: Can't read from file %s\n", argv[1]);
	file_dest = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_dest == -1)
		_stderr(99, "Error: Can't write to %s\n", argv[2]);
	brd = read(file_src, buff, BUFF_SIZE);
	while (brd > 0)
	{
		bwr = write(file_dest, buff, brd);
		if (bwr == -1)
			_stderr(99, "Error: Can't write to %s\n", argv[2]);
	}
	if (brd == -1)
		_stderr(98, "Error: Can't read from file %s\n", argv[1]);
	if (close(file_src) == -1)
		_stderr(100, "Error: Can't close fd %d\n", file_src);
	if (close(file_dest) == -1)
		_stderr(100, "Error: Can't close fd %d\n", file_dest);

	return (0);
}
