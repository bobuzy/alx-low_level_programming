#include <stdio.h>
#include "main.h"

/**
 * print_array - Print n elements of an array of integers
 * @a: Pointer to the array of integers
 * @n: Number of elements of the array to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);
		if (m != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
