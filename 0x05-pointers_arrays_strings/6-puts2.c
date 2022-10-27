#include "main.h"
/**
 * puts2 - print other character of string
 * starting with first character 
 * @str: string to print
 * Return: void
 */
void puts2(char *str);
{
	int i;
	for (i = 0; str[i]; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
