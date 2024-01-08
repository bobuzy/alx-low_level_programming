#include "main.h"

/**
 * print_chessboard - Print a chessboard layout
 * @a: Pointer to a chess layout in a 2D array
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}
