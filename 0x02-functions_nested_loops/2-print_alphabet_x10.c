#include "main.h"
/**
 * main - print 10 times aphabet
 * in lowercase followed by new line
 *
 * Return: Alway 0 (success)
 */
void print_alphabet_x10(void)
{
	char ch;
	int count; /* to count it 10 times */

	for (count = 0; count <= 10; count++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
