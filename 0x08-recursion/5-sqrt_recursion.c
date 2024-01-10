#include "main.h"

/**
 * _sqrt_recursion - Return the squrare root of integer n
 * @n: The number
 *
 * Return: The square root of n, -1 if x doesn't have a natural root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (square_root(n, 1));
	}
}

/**
 * square_root - Finds the square root of x recursively
 * @x: The number
 * @y: The starting point
 *
 * Return: The square root of x, -1 if x doesn't have a natural root
 */

int square_root(int x, int y)
{
	if ((y * y) > x)
	{
		return (-1);
	}
	else if ((y * y) == x)
	{
		return (y);
	}
	else
	{
		return (square_root(x, y + 1));
	}
}
