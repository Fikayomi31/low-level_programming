#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i;
	char temp;
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
        	s[len - i - 1] = temp;
	}
	_putchar('\n');
}
