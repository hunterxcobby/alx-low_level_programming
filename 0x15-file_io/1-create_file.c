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
	char *BUFFER = NULL;
	ssize_t read_data;
	ssize_t written;

	/* Open the file for reading and writing, create if it doesn't exist*/
	fd = open(filename, O_RDWR | O_CREAT, 0600);
	if (fd == -1)
	{
		perror("failed to create!");
		return (1);
	}
	/* Allocate memory for BUFFER*/
	BUFFER = malloc(strlen(text_content) + 1);
	if (BUFFER == NULL)
	{
		return (0);
	}


	read_data = read(fd, BUFFER, sizeof(text_content));
	if (read_data == -1)
	{
		perror("failed to read!");
		return (0);
	}

	written = write(fd, BUFFER, read_data);
	if (written == -1)
	{
		perror("failed to write!");
		return (0);
	}
	written = written + 1;

	return (written);

	free(BUFFER);
	close(fd);

}

