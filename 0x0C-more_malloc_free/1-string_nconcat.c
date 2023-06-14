#include "main.h"

/**
 * _strlen - get the length of the string
 * @string: the string
 *
 * Return: the length of the string
 */
int _strlen(char *string)
{
	int i;

	/* length of the string */
	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - concatenates two string.
 * @s1: the first string to cancatenate
 * @s2: the second string to concatenate
 * @n: the number of bytes
 * Return: pointer to new allocated memory which contain both
 * s1, s2 and n if fail return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *alloc;
	int len, num, i, j;
	num = n;

	if (s1 == NULL || s2 == NULL)
		return "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
			num = _strlen(s2);
	len = _strlen(s1) + num + 1;
	
        alloc = malloc(len * sizeof(char));

	if (alloc == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		alloc[i] = s1[i];
	for (j = 0; j < num; j++)
		alloc[i + j] = s2[j];
	alloc[i + j] = '\0';

	return (alloc);
}
