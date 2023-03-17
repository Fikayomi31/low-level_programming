#include "main.h"
#include <ctype.h>

/**
 * _isupper - check for uppercase
 * @c: character to check
 *
 * Return: 1 if it uppercase otherwise 0
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
