#include "main.h"

/**
 * append_text_to_file - Append text at the end of a file
 * @filename: The name of the file to append the text
 * @text_content: The text to be appended at the end of the string
 *
 * Return: 1, for success. -1 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length, bytes;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

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

	bytes = write(fd, text_content, length);

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
