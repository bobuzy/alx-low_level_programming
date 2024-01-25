#include "3-calc.h"

/**
  * op_add - This function adds two integers
  * @a: First integer
  * @b: Second integer
  * Return: The sum of both integers
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - This function finds the difference between two integers
  * @a: The first integer
  * @b: The second integer
  * Return: The difference
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - This function finds the products between two integers
  * @a: The first integer
  * @b: The second integer
  * Return: The product of the two integers
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - This function divides integer a by b
  * @a: The first integer
  * @b: The second integer
  * Return: The result
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - This finds the modulos
  * @a: The first integer
  * @b: The second integer
  * Return: The modulos
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
