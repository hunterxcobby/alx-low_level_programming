#include "main.h"

/**
 * create_file - Create a file with specified content.
 * @filename: Name of the file to create.
 * @text_content: Content to write to the file.
 *
 * Return: 0 on success, 1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	/*char *BUFFER = NULL;*/
	/*ssize_t read_data;*/ 
	int written;

	if(!filename)
		return (-1);
	
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		perror("fails");
		return (-1);
	}

	if(text_content == NULL)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)

	written = write(fd, text_content, letters);
	if (written == -1)
		return (-1);

	close(fd);

	return (1);
}

