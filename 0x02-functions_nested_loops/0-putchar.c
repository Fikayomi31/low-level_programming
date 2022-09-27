#include "main.h"
#include <string.h>
/**
 * main - entry point
 *
 * print _putchar followed by a new line
 *
 * Return: Alway 0
 */
int main(void)
{
	/* turning _putchar into a string */
	char str[] = "_putchar";
	/* strlen function calculate the length of a string */ 
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
