#include <stdio.h>
#include "main.h"

/**
 * main - This function prints all the arguments
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
