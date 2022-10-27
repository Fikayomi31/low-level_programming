#include "main.h"
/**
 * print_rev - print string in reverse
 * followed by new line
 * @s: string to print
 * Return: Alway 0
 */
void print_rev(char *s)
{
	int i;
	/* normal string write */
	for (i = 0; s[i]; i++)
		continue; /* do nothing */
	i == 1;
	while (i >= 0) /* to start from back */
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
