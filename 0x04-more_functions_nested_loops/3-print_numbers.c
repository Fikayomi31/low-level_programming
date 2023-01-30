#include "main.h"

/**
 * print_numbers - print number 0 - 9 followed by new line
 *
 * Return: void
 */

void print_numbers(void)
{
	char c;
	
	c = 48;
	while (c < 58)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

	
}

