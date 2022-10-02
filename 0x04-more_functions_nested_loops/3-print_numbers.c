#include "main.h"
#include <stdio.h>
/**
 * print_numbers- prints the number from 0 - 9
 *
 * Return: Always 0 (sucess)
 */
void print_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
