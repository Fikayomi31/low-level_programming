#include "main.h"

/**
 * _strcat - pointer function to concatenates two strings.
 * @dest: destination string
 * @src: source string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
