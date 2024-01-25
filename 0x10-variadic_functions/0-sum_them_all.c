#include "variadic_functions.h"

/**
 * sum_them_all - Calculate the sum of all the parameters
 * @n: The number of integers
 *
 * Return: The total sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
