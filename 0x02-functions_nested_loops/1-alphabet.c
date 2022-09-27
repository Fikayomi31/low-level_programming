#include "main.h"
/**
 * main - printalphabet in lowercase
 *
 * Description: alphabet followed by newline
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
