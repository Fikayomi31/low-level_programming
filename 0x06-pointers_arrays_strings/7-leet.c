#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string
 *
 * Return: encode string
 */
char *leet(char *str)
{
	char *alph = "aeotlAEOTL";
	char *num = "4307143071";
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; alph[j]; j++)

		{
			if (str[i] == alph[j])
			{
				str[i] = num[j];
				break;
			}
		}
		
	}
	return (str);
}
