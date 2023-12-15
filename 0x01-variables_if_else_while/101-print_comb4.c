#include <stdio.h>

/**
 * main - Print all possible different combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
	int n, m, o;

	for (n = 48; n < 56; n++)
	{
		for (m = n + 1; m < 57; m++)
		{
			for (o = m + 1; o < 58; o++)
			{
				putchar(n);
				putchar(m);
				putchar(o);

				if (n != 55)
				{
					putchar(44);
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
