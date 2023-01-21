#include <stdio.h>

/**
 * print_to_98 - function to print all natural number n to 98
 * @n: number to print
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		printf("%d", n);

		if (n != 98)
			printf(", ");
	}
	else
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
	}
	putchar('\n');
}
