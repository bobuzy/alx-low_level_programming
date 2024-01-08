#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Print the sum of two diagonals of a square matrix of integers
 * @a: Pointer to 2D array
 * @size: input
 *
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, n;

	sum1 = 0;
	sum2 = 0;

	for (n = 0; n < size; n++)
	{
		sum1 = sum1 + a[n * size + n];
	}

	for (n = size - 1; n >= 0; n--)
	{
		sum2 += a[n * size + (size - n - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
