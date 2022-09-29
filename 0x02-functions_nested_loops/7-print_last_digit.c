#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: number
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar('0' + n);
	return (n);
