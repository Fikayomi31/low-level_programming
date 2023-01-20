#include "main.h"
/**
 * jack_bauer - function to print every minute of the day
 * of javk bauer starting from 00:00 23:59
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int h, i, j, m, k, l;

	/* for the hour */
	for (h = 0; h < 24; h++)
	{
		i = h / 10; /*division to get 1 - 2 of first digit in hour*/
		j = h % 10; /*module to get 0 - 4 of second digit in hour */

		/* for the minute */
		for (m = 0; m < 60; m++)
		{
			k = m / 10; /* division to first digit in minute */
			l = m % 10; /* module to second digit in minute */

			_putchar(48 + i);
			_putchar(48 + j);
			_putchar(':');
			_putchar(48 + k);
			_putchar(48 + l);
			_putchar('\n');
		}
	}
			
}
