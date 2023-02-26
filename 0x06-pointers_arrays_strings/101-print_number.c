#include "main.h"

/**
 * print_number - print an integer
 * @n: the integer
 *
 * Return: integer
 */

void print_number(int n)
{
	unsigned int num;
	
	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}
	if ( num < 10)
	{
		_putchar('0' + num);
	}
	else
	{
		print_number(num / 10);
		_putchar('0' + (num % 10));
	}
}

