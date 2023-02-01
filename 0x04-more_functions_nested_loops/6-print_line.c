#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @n:number of time the line should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
