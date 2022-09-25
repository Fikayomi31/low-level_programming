#include <stdio.h>
/**
 * main - program that prints all number in base 16
 *
 * Description: base 16 in lowercase follow by new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char ch;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
