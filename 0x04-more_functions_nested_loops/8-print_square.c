#include "main.h"

/**
 * print_square - prints a square followed by new line
 * @sizeb size of the squar
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		/* looping i throught size for the row */
		for (i = 0; i < size; i++)
		{
			/* nested looping of j through size for column */
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

