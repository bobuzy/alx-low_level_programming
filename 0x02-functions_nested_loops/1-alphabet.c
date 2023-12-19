#include "main.h"

/**
 * print_alphabet - Print the alphabets in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}
