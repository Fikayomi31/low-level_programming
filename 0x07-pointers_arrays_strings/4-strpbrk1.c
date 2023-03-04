#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: the string
 * @accept: substring to search
 *
 * Return: the bytes in s that match accept or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	//char *substring;
	
	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (s + i);
				
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
