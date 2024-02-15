#include "main.h"


/**
 * create_file - Create a file
 * @filename: The name of the file to be created
 * @text_content: The pointer to the string to be written into
 * the file
 *
 * Return: 1, on success. -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, length, bytes;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	length = _strlen(text_content);

	byyes = write(fd, text_content, length);

	if (bytes == -1 || bytes != length)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}


/**
 * _strlen - Counts the lenght of a string
 * @s: The pointer to the string
 *
 * Return: The lenght of the string
 */

int _strlen(char *s)
{
	int n = 0;

	while (*s++)
	{
		n++;
	}

	return (n);
}
