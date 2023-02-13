#include "main.h"

/**
 * puts_half - print half of a string
 * @str: pointer to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len, n;
	
	for (len = 0; str[len] != '\0'; len++)
		continue;

	if (len % 2 == 1)
		n = len + 1 / 2;

	else
		n = len / 2;
	for (; n < len; n++)
		_putchar(str[n]);
	_putchar('\n');
}
