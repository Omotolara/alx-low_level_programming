#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int bwr, str_len, file_desc;

	if (filename == NULL)
		return (-1);
	file_desc = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file_desc == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[str_len])
			len++;
		bwr = write(file_desc, text_content, str_len);
		if (bwr != str_len)
		{
			close(file_desc);
			return (-1);
		}
	}

	close(file_desc);
	return (1);

}
