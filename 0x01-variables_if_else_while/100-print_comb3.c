#include <stdio.h>

/**
 * main - Print all possible different combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
	int n, m;

	for (n = 48; n < 57; n++)
	{
		for (m = n + 1; m < 58; m++)
		{
			putchar(n);
			putchar(m);
			if (n != 56)
			{
				putchar(44);
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
