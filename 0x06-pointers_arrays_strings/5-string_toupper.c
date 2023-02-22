#include "main.h"

/**
 * string_toupper - change all lowercase letter to uppercase
 * @c: string to change
 *
 * Return: uppercase
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] < 123)
		{
			c[i] -= 32;
		}
	}
	return (c);
}
