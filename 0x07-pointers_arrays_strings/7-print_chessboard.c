#include "main.h"

/**
 * print_chessboard - a function that prints a chess board
 *
 * @a: a 2D array
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			if (j == 7)
				_putchar('\n');
			j++;
		}
		i++;
	}

}
