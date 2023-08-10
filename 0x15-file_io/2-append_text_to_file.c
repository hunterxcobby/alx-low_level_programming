#include "main.h"

/**
 * append_text_to_file- function that appends
 *  text at the end of a file.
 * @filename: the name of the file
 * @text_content: the content of the text
 *
 * Return: Return 1 for success and -1 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int written;
	int letters;
	int data_read;

	if (!filename)
	fd = open(filename, O_RDWR | O_APPEND | 0664);
	if (fd == -1)
	{
		return (-1);
	}

	data_read = read(fd, text_content, sizeof(text_content));
	if (data_read == -1)
	{
		return (-1);
	}

	for (letters = 0; text_content[letters]; letters++)
		;

	written = write(fd, text_content, letters);
	if (written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
