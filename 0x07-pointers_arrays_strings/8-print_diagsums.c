#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Print the sum of two diagonals of
 * a square matrix of integers
 * @a: Pointer to 2D array
 * @size: input
 *
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int n = 0;
	int m = 0;
	int o = 0;

	for (; o < size; o++)
	{
		n = n + a[(size + 1) * o];
		m = m + a[(size - 1) * (o + 1)];
	}

	printf("%d, %d \n", n, m);
}
