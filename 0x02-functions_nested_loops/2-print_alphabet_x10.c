#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabets 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		m = 97;

		while (m < 123)
		{
			_putchar(m);
			m++;
		}
		_putchar('\n');
	}
}
