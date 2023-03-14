#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - function that return natural square root of a number
 * @n: the interger number
 * 
 * Return: square of n or -1 if it does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	int sqrt_function(int n, int sqt);

	int sqt = 1;
	return (sqrt_function(n, sqt));
}

/**
 * sqrt_function - function to help solve recursion
 * @n: the integer number
 * @sqt: number to determine square root
 *
 * Return: sqt, or -1 if it not natural square number
 */

int sqrt_function(int n, int sqt)
{
	/* ie sqt * sqt is n automatical it is square root */
	if (n == sqt * sqt)
	{
		return (sqt);
	}
	else if (sqt < n)
	{
		/* perform recursion until it = n */
		return (sqrt_function(n, ++sqt));
	}
	else
		return (-1);


}
