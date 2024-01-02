#include "main.h"

/**
 * _puts - Print a string followed by a new line
 * @str: The pointer to the string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
