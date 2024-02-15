#include "main.h"

/**
 * read_textfile - Read a text file and print it to standard output
 * @filename: Pointer to the file to be read
 * @letters: Number of letters it should read and print
 *
 * Return: Number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buff[BUFF_SIZE * 8];
	size_t bytes;

	if (!filename || !letters)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	bytes = read(fd, &buff[0], letters);
	bytes = write(STDOUT_FILENO, &buff[0], bytes);

	close(fd);

	return (bytes);
}
