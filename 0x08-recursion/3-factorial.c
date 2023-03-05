#include "main.h"

/**
 * factorial - function that return the factorial of given number
 * @n: the integer number
 *
 * Return: factorial of given number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
