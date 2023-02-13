#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	/* getting the length of the string */
	int len = strlen(s);
	int i;
	char temp;
	
	/* looping through the len of the string / 2 to rev the string */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i]; /* storing the rev string in temp */
		s[i] = s[len - i - 1];
        	s[len - i - 1] = temp;
	}
	_putchar('\n');
}
