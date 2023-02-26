#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 *
 * Return: encode string
 */
char *rot13(char *str)
{
	char set1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char set2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; set1[j]; j++)
		{
			if (str[i] == set1[j])
			{
				str[i] = set2[j];
				break;
			}
		}
	}
	return (str);
}
