#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: a NULL terminated string to add at the end of the file
 * Return: 1 0n success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	size_t length;
	ssize_t bwr;

	if (filename == NULL)
		return (-1);
	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
		return (-1);
	if (text_content != NULL)
	{
		length = 0;
		while (text_content[length] != '\0')
			length++;
		bwr = write(file_desc, text_content, length);
		if (bwr == -1)
		{
			close(file_desc);
			return (-1);
		}
	}

	close(file_desc);
	return (1);
}
