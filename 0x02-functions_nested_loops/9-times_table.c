#include "main.h"
/**
 * time_table - prints the 9 times table, starting
 * with 0.
 * Return: nothing
 */
void times_table(void)
{
	int t = 9; /* times */
	int r; /* rows */
	int c; /* columns */
	int m; /* multiple */

	for (r = 0; r <= t; r++) /* i.e 9 x the row */
	{
		/* multiple row with column */
		m = r * c;

		if (m / 10) /* if a 1st digit exits */
			_putchar(48 + (m / 10)); /* print d 1st digit */
		else if (c != 0)
			_putchar(' ');

		_putchar(48 + (m % 10));

		if (c != t)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
