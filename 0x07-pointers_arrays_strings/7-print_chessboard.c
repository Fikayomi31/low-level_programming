#include "main.h"

/**
 * print_chessboard - function that print chessboard
 * @a: 2D array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_puthar(a[i][y]);
			if (j == 8)
			{
				_putchar('\n');
			}
		}
	}
}
