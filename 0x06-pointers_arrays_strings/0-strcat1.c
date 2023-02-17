#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	
	/* loop throught dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* loop through src */
	while (src[j] != '\0')
	{
		/*concatenate src into dest */
		dest[i] = src[j];
		j++;
		i++;
	}
	
	return (dest);
}
