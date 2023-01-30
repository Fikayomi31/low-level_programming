#include "main.h"

/**
 * _isdigit - check for a digit 0 - 9
 * @c: digit to check
 *
 * Return: 1 if it digit otherwise 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
