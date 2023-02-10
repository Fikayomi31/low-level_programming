#include "main.h"

/**
 * _strlen - length of a string
 * @*s - the string pointer
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int i;
	
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);

}
