#include "main.h"
/**
 * main - function that print the sign of a number
 * @n: if + return 1 or 0 if it zero or
 * -1 if it less than zero
 *
 *  Return 1 0r 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
