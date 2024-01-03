#include "main.h"

/**
 * puts2 - Print every other character of a string
 * @str: The string to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0, n = 0;

	while (str[i++])
	{
		n++;
	}

	for (i = 0; i < n; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
