#include "main.h"
#include <ctype.h>
/**
 * main - function that checks for alphabet
 *
 * @c: letter to consider
 *
 * Return: 1 if it lower or uppercase 0 otherwise
 */
int _isalpha(int c)
{
	char ch = (int)c;
	/* isalpha test character of alphabet wether it is lower or uppercase */
	if (isalpha(ch))
		return (1);
	return (0);
}
