#include "main.h"

/**
 * print_most_numbers - print number 0 - 9 except 2 and 4
 * followed by new line
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char c;

	c = 48;
	while (c < 58)
	{
		if ((c != 50) && c != 52)
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
