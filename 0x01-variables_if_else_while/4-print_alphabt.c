#include <stdio.h>

/**
 * main - Print the alphabets in lowercase except q & e
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if (n == 113 || n == 101)
		{
			continue;
		}
		else
		{
			putchar (n);
		}
	}
	putchar('\n');
	return (0);
}
