#include "main.h"

/**
 * _strcpy - copy the string pointer to src with the terminating
 * null byte
 * @src: string to copy
 * @dest: buffer destination to be copy to
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
