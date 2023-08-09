#include "main.h"

/**
 * read_textfile - Reads and writes the contents of a file
 * to standard output * @filename: Name of the file to read.
 * @letters: Number of bytes to read and write.
 *
 * Return: Number of bytes read and written, or 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	/*char *duplicate;*/
	ssize_t written;
	ssize_t data_read = letters;
	char *BUFFER = NULL;

	/*duplicate = strdup(filename);*/


	fd = open(filename, O_RDONLY);
	if (fd == -1) 
	{
		return (0);
	}

	BUFFER = malloc(letters);
	if (BUFFER == NULL) 
	{
		return (0);
	}

	data_read = read(fd, BUFFER, letters);
	if (data_read == -1)
	{
		return (0);
	}

	written = write(STDOUT_FILENO, BUFFER, data_read);

	if (written == -1) 
	{
		return (0);
	}

	close(fd);

	return (written);

}
