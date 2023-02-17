#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination string 
 * @src: source string
 * @n: number of bytes from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
