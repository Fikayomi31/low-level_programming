#include "main.h"
/**
 * print_times_table - function that print the n times table
 * starting from 0 and not more than 15
 * @n: time table to use
 *
 * Return: void
 */

void print_times_table(int n)
{
	int row, col, mul;
	
	row = 0;
	if (n < 0 || n > 15)
		return;

	while (row <= n)
	{
		for (col = 0; col <= n; col++)
		{
			mul = row * col;
			if (col == 0)
				_putchar(48 + mul);
			else if (mul < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(48 + mul);
			}
			else if (mul < 100)
			{
				_putchar(' ');
				_putchar(48 + mul / 10);
				_putchar(48 + mul % 10);
			}
			else
			{
				_putchar(48 + mul / 100);
				_putchar(48 + (mul -100) / 10);
				_putchar(48 + mul % 10);
			}
			if (col < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		row++;
	}

}

