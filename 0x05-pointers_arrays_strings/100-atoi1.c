#include "main.h"

/**
 * _atoi1 - strings to integer
 * @s: string to convert
 *
 * Return: string converted to integer
 */

int _atoi1(char *s)
{
	int i;
	unsigned int n = 0;
	for (i = 0; s[i] != '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return (n);

}
