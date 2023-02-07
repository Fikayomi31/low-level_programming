#include "main.h"

/**
 * swap_int - swapping the value of two integers
 * @*a: first poniter integer
 * @*b: second pointer integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	/* swapping value */
	c = *a;
	*a = *b;
	*b = c;
}
