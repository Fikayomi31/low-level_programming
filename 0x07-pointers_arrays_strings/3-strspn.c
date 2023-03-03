#include "main.h"

/**
 * _strspn - function that get the length of a prefix substring
 * @s: the string
 * @accept: substring
 *
 * Return: s which contain bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	/* loopimg through the s string */
	for (i = 0; s[i]; i++)
	{
		/* looping through accept string to s string */
		for (j = 0; accept[j] != s[i]; j++)
		{
		
			if (accept[j] == '\0')
				return (i);
		}
	
	}
	return (i);
}

