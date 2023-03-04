#include "main.h"

/**
 * _strpbrk - function that search a string for any of a set of bytes
 * @s: string to search from
 * @accept: string to search
 *
 * Return: s or NULL if no byes found
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

