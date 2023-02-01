#include "main.h"

/**
 * print_triangle - print a triangle followed by new line
 * @size: size of triangle to print
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
