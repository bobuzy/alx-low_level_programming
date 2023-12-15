#include <stdio.h>

/**
 * main - Prints all possible combinations of 2 two-digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int n, m;
	int x, y;

	for (n = 48; n < 58; n++)
	{
		for (m = 48; m < 58; m++)
		{
			for (x = n; x < 58; x++)
			{
				for (y = m + 1; y < 58; y++)
				{
					putchar(n);
					putchar(m);
					putchar(' ');
					putchar(x);
					putchar(y);

					if (n != 57 || m != 56 || x != 57 || y != 57)
					{
						putchar(44);
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
