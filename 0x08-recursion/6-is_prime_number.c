#include "main.h"

/**
 * is_prime_number - Check if integer n is a prime number or not
 * @n: The number
 *
 * Return: 1, if n is prime. 0, otherwise.
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (find_prime(n, 2));
	}
}

/**
 * find_prime - Find the prime number of x recursively
 * @x: The number
 * @y: The starting point
 *
 * Return: 1, if x is prime. 0, otherwise
 */

int find_prime(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	else if (x % y == 0)
	{
		return (0);
	}
	else
	{
		return (find_prime(x, y + 1));
	}
}
