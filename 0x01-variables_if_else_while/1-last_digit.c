#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This function prints the last digit of the random number
 *
 * Return: 0
 */

int main(void)
{
	int m;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = n % 10;

	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else if (m < 6 && m != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);
}
