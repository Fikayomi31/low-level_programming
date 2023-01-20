#include "main.h"
/**
 * print_sign - function that print sign of a number
 * @n: the number
 *
 * Return: 1 and print + if n > 0 or n = 0 return 0 and -1
 * if n < 0 and print -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
