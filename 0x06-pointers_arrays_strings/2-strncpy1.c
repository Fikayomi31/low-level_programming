#include "main.h"

/**
 * _strncpy1 - copy string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes for src
 *
 * Return: dest
 */
char *_strncpy1(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
