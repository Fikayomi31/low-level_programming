#include "main.h"

/**
 * _strchr - function that locate a character in a string
 * @s: the string
 * @c: the character in the string
 *
 * Return: c
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int length;


	/* looping for the length of the string */
	for (length = 0; s[length]; length++)
		continue;


	while (i <= length)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
