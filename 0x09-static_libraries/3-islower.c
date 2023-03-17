#include "main.h"

/**
 * islower - function that check for lowercase of a character
 * @c: character to check
 * Return: 1 if c is lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
