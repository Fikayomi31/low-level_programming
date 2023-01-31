#include "main.h"

/**
 * more_numbers - print 10 times the number, from 0 - 14
 * followed by new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int c;
	int i;
	
	/* in 10 places */
	for (i = 0; i <= 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			/* for 2 digit number */
			if (c >= 10)
				_putchar(c / 10 + 48); /*ie 14 / 10 = 1 */
			/* if it now single digit 2 % 10 is 2 */
			_putchar(c % 10 + 48); /* ie 14 % 10 = 4 now 14 */
		}
		_putchar('\n');
	}


}
