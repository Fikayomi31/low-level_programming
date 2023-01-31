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

	for (i = 0; i <= 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar(c / 10 + 48);
			_putchar(c % 10 + 48);
		}
		_putchar('\n');
	}


}
