#include "main.h"
/**
 * _strlen - function that return length of a string
 * @s: string to return the length
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;
	while (s[length] != '\0')
	{
		_putchar(s[length]);
		length++;
	}
	_putchar('\n');
}
