#include "main.h"

/**
 * print_chessboard - Function that prints chessboard
 * @a: 2d of the board
 */

void print_chessboard(char (*a)[8])
{
	unsigned int x;
	unsigned int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
