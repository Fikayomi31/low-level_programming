#include "main.h"
#include <string.h>

/**
 * _strncpy - concanerate two string with number of bytes
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to concanerate
 * Return: the concanerated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
