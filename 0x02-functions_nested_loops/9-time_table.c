#include "main.h"
/**
 * time_table - function to print9 times table
 *
 * Return: Alway 0
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++) /* for row which will stop at 9 */
	{
		for (j = 0; j < 10; j++) /* for colume */
		{
			k = i * j; /* multiply i by j through of each number */

			if (j == 0) /* if j is 0 ie any multiply of 0 is 0 */
				_putchar(48 + k);

			if (k < 10 && j != 0) /* if k is single digit and j is not 0 */
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(48 + k);
			}
			else if (k >= 10) /* ifbk is 2 or more digit */
			{
				_putchar(',');
				_putchar(' ');
				_putchar(48 + (k / 10));
				_putchar(48 + (k % 10));
			}
			else if (k > 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(48 + (k / 100));
				_putchar(48 + ((k /10) % 10)); 
				_putchar(48 + (k % 10));
			}


		}
		_putchar('\n');
	}
}
