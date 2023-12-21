#include "main.h"

/**
 * print_diagonal - Print the forward slash \ n times
 * @n: The number of times n would be printed
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int m;

		for (m = 0; m < n; m++)
		{
			int x = 0;

			while (x < m)
			{
				_putchar(32);
				x++;
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
