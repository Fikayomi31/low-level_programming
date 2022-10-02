#include "main.h"
#include <stdio.h>
/**
 * print_most_number - print number from 0-9
 * except 2 and 4
 *
 * Return: Alway 0 (success)
 */
void print_most_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		if (num == '2'' || num == '4')
		{
			num++;
			continue;
		}
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
