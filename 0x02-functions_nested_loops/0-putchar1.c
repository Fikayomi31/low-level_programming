#include <stdio.h>
/**
 * main - Entry point
 *
 * Print _putchar followed by anew line
 *
 * Return: Alway 0
 */
int main(void)
{
	char ch[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');

	return (0);
}
