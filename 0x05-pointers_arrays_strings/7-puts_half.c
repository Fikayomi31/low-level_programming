#include "main.h"
/**
 * puts_half - print half of a string
 * @str: string to print
 * Return: void
 */
void puts_half(char *str)
{
	int n, len;
	/* length of the string */
	for (len = 0; str[len]; len++)
		continue;
	
	/* if half is odd */
	if (len % 2 == 1)
		n = (len + 1) / 2;

	/* if the half is even */
	else
		n = len / 2;
	for (; n < len; n++)
		_putchar(str[n]);
	_putchar('\n');
}
