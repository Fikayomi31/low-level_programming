#include <stdio.h>
/**
 * main - print alphabet in lowercase and uppercase
 *
 * Return: 0
 *
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
	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar(\n);
	return (0);
}
