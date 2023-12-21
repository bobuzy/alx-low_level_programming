#include "main.h"

/**
 * print_line - Print _ n times
 * @n: The number of _ to be printed
 *
 * Return: 0
 */

void print_line(int n)
{
	int m;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
