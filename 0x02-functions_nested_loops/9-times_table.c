#include "main.h"

/**
 * times_table - Print the 9 times table
 *
 * Return: 0
 */

void times_table(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		int m, o;

		for (m = 0; m < 10; m++)
		{
			o = n * m;

			if (m == 0)
			{
				_putchar('0');
				_putchar(44);
			}
			else
			{
				_putchar(' ');

				if (o < 10)
				{
					_putchar(' ');
					_putchar(o + '0');
				}
				else if (o > 9)
				{
					_putchar((o / 10) + '0');
					_putchar((o % 10) + '0');
				}
				if (m != 9)
				{
					_putchar(44);
				}
			}
		}
		_putchar('\n');
	}
}
