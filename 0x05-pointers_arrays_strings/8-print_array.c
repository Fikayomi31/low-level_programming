#include "main.h"

/**
 * print_array - print element of an array of integer
 * @a: pointer to array of integer
 * @n: number of element to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d, ", a[i]);
	
		if (i == n - 1)
			printf("%d", a[i]);
	}
	printf("\n");
}
