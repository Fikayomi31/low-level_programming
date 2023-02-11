#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
		continue;
	i -= 1;
	while (s[i] >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
