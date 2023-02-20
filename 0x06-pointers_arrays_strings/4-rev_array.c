#include "main.h"

/**
 * reverse_array - reverse a string
 * @a: string to reverse
 * @n: number of bytes to reverse
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int first = 0;
	int last = n - 1;
	int i;

	while ( first < last)
	{
		i = a[first];
		a[first] = a[last];
		a[last] = i;
		first++;
		last--;
	}
}
