#include "main.h"

/**
 * _memcpy - function to copy memory area
 * @dest: destination array area
 * @src: source to copy from
 * @n: bytes to copy
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (count < n)
	{
		/* copying into dest */
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
