#include "main.h"
/**
 * isalpha - check if a character is upper or lower
 * @c: character to check
 *
 * Return: 1 if c is upper or lower otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

