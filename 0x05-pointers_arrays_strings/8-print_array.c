#include "main.h"
/**
 * print_array - print element of an array of integer
 * @n: number of element to print
 * @a: array of integer
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		putchar(',');
		putchar(' ');
		i++;
	}
}

