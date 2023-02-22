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
	int first = 0; /* to get the first character */
	int last = n - 1; /* to get the last character */
	int i;
	
	while ( first < last)
	{
		i = a[first]; /* casting first string into i */
		a[first] = a[last]; /*casting into a[first] */
		a[last] = i; /* casting into a[last] */
		first++;
		last--;
	}
}
