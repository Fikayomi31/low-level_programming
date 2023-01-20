#include "main.h"
/**
 * time_table - function to print9 times table
 *
 * Return: Alway 0
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;

			if (j == 0)
				_putchar(48 + k);

			if (k < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(48 + k);
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(48 + (k / 10));
				_putchar(48 + (k % 10));
			}



		}
		_putchar('\n');
	}
}
