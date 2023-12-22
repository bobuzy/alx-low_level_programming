#include <stdio.h>
#include <math.h>

/**
 * main - This syntax prints the prime factor of 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long number = 612852475143;
	double root = sqrt(number);
	long n, priFac;

	for (n = 1; n <= root; n++)
	{
		if (number % n == 0)
		{
			priFac = number / n;
		}
	}

	printf("%ld\n", priFac);

	return (0);
}
