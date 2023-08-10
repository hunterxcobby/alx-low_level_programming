#include "main.h"

/**
 * main - the entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 to indicate success
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}

/**
 * copy_file - a function that copies the contents
 * of one file to the other.
 * @file_from: the file we will be copying from
 * @file_to: the file to copy to
 *
 * Return: 0 for success
 */

ssize_t copy_file(const char *file_from, const char *file_to)
{
	int fd_ff, fd_ft;
	char *BUFFER = NULL;
	ssize_t data_read, written;

	/*if(!file_from)*/
	fd_ff = open(file_from, O_RDONLY);
	if (fd_ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	data_read = 1024;
	BUFFER = malloc(data_read);
	if (BUFFER == NULL)
	{
		return (0);
	}

	data_read = read(fd_ff, BUFFER, data_read);
	if (data_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from);
		exit(98);
	}


	fd_ft = open(file_to, O_CREAT | O_RDWR | O_TRUNC, 0664);
	written = write(fd_ft, BUFFER, data_read);
	if (written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	free(BUFFER);
	close(fd_ff);
	close(fd_ft);

	return (0);
}
