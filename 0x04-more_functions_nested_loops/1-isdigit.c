#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isdigit - to check for a digit through 0-9
 * @c: a character
 * Return: 1 if @c is digit otherwise 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
