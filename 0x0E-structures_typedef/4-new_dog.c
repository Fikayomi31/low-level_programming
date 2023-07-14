#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - length of the string
 * @s: pointer to the string
 *
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcpy - copy string from one source and dest
 * @dest: destination for the string
 * @src: source for the string
 *
 * Return: dest for the string
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);

}

