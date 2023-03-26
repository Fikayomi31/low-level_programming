#include "main.h"

/**
 * _strcmp1 - compare two string
 * @s1: first string
 * @s2: second string
 * Return: an integer
 */

int _strcmp1(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}

