#include "main.h"
/**
 * print_last_digit - function that ouput last digit of a number
 * @n: the number
 *
 * Return: the value of the digit digit
 */

int print_last_digit(int n)
{
	int last = abs(n);
	int l = last % 10;
   	_putchar(48 + l);
	return (l);
}
