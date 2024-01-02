#include "main.h"

/**
 * swap_int - Swap the values of a and b
 * @a: The first pointer of type int to be swapped
 * @b: The second pointer of type int to be swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
