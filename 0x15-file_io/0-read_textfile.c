#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX STDOUT
 * @filename: the name of the file to be read
 * @letters: num. of letters to be read and printed
 * Return: actual num. of letters read, 0 if file can't be opened/read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t lrd, lwr, file_desc;
	char *buff;

	if (filename == NULL)
		return (0);
	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	lrd = read(file_desc, buff, letters);
	if (lrd == -1)
	{
		free(buff);
		return (0);
	}
	lwr = write(STDOUT_FILENO, buff, lrd);
	if (lwr == -1 || lwr != lrd)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(file_desc);
	return (lwr);
}
