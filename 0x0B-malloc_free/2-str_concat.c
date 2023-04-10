#include "main.h"

/**
 * str_concat - concatenates two strings
 * s1: string to concatenates
 * s2: string to concatenatea
 *
 * Return: contents of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;
	
	if (s1 == 0 && s2 == 0)
		return (NULL);

	for (i = 0; s1[i] && s2[2]; i++)
		;
	str = malloc(i * sizeof(*str) + 1);
	
	if (str == 0)
		return (NULL);
	strcat(str, s1);
	strcat(str, s2);
	return (str);
}
