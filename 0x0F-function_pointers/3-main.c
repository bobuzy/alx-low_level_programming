#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - Perform simple operations
  * @argc: The argument count
  * @argv: The argument vector
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", ptr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
