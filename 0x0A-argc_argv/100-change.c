#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function prints the minimum number of coins to
 * make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: If the number of arguments is not exactly one 1, Otherwise 0
 */

int main(int argc, char *argv[])
{
	int cents, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}
	while (cents > 0)
	{
		count++;

		if ((cents - 25) >= 0)
		{
			cents -= 25;
		}
		else if ((cents - 10) >= 0)
		{
			cents -= 10;
		}
		else if ((cents - 5) >= 0)
		{
			cents -= 5;
		}
		else if ((cents - 2) >= 0)
		{
			cents -= 2;
		}
		else if ((cents - 1) >= 0)
		{
			cents -= 1;
		}
	}
	printf("%d\n", count);
	return (0);
}
