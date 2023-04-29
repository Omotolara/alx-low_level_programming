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
 * cp_file - copies file
 * @path_src: the path copying from
 * @path_dest: error message
 * Return: nothing
 */
void cp_file(char *path_src, char *path_dest)
{
	int file_src, file_dest, brd, bwr;
	char buff[BUFF_SIZE];

	file_src = open(path_src, 0_RDONLY);
	if(file_src  == -1)
		_stderr(98, "Error: Can't read from file %s\n", path_src);
	file_dest = open(path_dest, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_dest == -1)
		_stderr(99, "Error: Can't write to %s\n", path_dest);
	brd = read(file_src, buff, BUFF_SIZE);
	while (brd > 0)
	{
		bwr = write(file_src, buff, brd);
		if (bwr == -1)
			_stderr(99, "Error: Can't write to %s\n", path_src);
        }
	if (rd == -1)
		_stderr(98, "Error: Can't read from file %s\n", path_dest);
	if (close(file_dest) == -1)
		_stderr(100, "Error: Can't close fd %d\n", file_dest);
	if (close(file_src) == -1)
		_stderr(100, "Error: Can't close fd %d\n", file_src);
}

/**
 * main - copies the content of a file to another file
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		_stderr(97, "Usage: cp file_from file_to\n", 0);
	cp_file(argv[1], argv[2]);

	return (0);
}
