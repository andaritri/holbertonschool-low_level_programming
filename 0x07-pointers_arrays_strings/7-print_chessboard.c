#include "holberton.h"

/**
 * print_chessboard - print chessboard
 * @a: size chessboard
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int row = 0, col = 0;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
			_putchar(a[row][col]);
		_putchar('\n');
	}
}
