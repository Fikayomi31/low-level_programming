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
		for (n = 0; n <= 98; n++)
		{
			printf("%d", n);

			if (n != 98)
				printf(", ");
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	putchar('\n');
}
