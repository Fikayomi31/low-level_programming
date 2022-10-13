#include <ctype,h>
#include "main.h"
/**
 * _islower - test if character is lowercase
 * @c: the character
 *
 * Return: 1 if it lowercaser otherwise 0
 */
int _islower(int c)
{
	char ch = (int)c;
	if (islower(ch))
		return (1);
	return (0);
}
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
