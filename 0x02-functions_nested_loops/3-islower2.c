#include "main.h"
/**
 * _islower - another way to check for lowercase of character
 *
 * @c: character to check
 *
 * Return: 1 if c is lowercase otherwise 0
 */
int _islower2(int c)
{
	/* typecast an int c into char cha */
	char cha = (int)c;

	if (islower(cha))
		return (1);
	else
		return (0);
}
