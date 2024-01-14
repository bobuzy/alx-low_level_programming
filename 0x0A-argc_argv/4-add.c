#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Thsi function prints the sum of positive numbers
  * @argc: The argument count
  * @argv: The argument vector
  * Return: 0 if the inputs are correct, 1 otherwise
  */

int main(int argc, char *argv[])
{
	int i;
	unsigned int k;
	int result = 0;
	char *j;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			j = argv[i];

			for (k = 0; k < strlen(j); k++)
			{
				if (j[k] < 48 || j[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			result = result + atoi(j);
		}
		printf("%d\n", result);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
