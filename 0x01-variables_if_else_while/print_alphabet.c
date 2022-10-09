#include <stdio.h>
/**
 * main - print alphabet in lowercase
 *
 * Return: 0;
 */
int main(void)
{
	int ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar(\n);
	return (0);
}
