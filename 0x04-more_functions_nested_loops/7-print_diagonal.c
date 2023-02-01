#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: times \ should be printed.
 * the diagonal end with a \n
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j; /* variable for row and colume */

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		/* loopimg i through n for the row for the \ */
		for (i =0; i < n; i++)
		{
			/* nested looping of j through n for colume for next \ 
			 * which will printed on next but followed a diagonal way
			 * of printing
			 */
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
