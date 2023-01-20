#include "main.h"
/**
 * _isalpha - another method to check for alphabetic character
 * @c: a character
 *
 * Return: 1 if is alphabetic otherwise 0
 */
int _isalpha2(int c)
{
	/* typecast an int c into char ch */
	char ch = (int)c;
	if (isalpha(ch))
		return (1);
	else
		return (0);
}
