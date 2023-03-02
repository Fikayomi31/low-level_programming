#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: memory buffer
 * @b: constant bytes
 * @n: memory area to be filled
 * Description: Fills the first n bytes of memory area pointer to by s with the constant byte b
 * Return: a pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;
	
	while (count < n)
	{
		s[count] = b;
		count++;
	}
	return (s);
}
