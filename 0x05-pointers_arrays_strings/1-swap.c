#include "main.h"
/**
 * swap_int - function to swap value of two integer
 * @a: swap value to @b value
 * @b: swap value to @a value
 * Return: Alway 0
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
