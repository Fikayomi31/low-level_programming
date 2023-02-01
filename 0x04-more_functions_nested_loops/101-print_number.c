#include "main.h"

/**
 * print_number - print an integer
 * @n: integer to print
 *
 * Return: void
 */

void print_number(int n);
{
	unsigned int i;

	if (n < 0)
	{
		i = -n
		_putchar('-');
	}
	else
	{
		i = n;
	}
	if (i / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');

}
