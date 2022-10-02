#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isupper - check if character is uppercase
 * @c: a character
 *
 * Return: 1 if @c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}

