#include <stdio.h>
#include "main.h"

/**
 * main - This function prints the number of args
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
