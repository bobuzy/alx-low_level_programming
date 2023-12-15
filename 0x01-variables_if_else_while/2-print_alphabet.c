#include <stdio.h>

/**
 * main - Print the alphabets in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
