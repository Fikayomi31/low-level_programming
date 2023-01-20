#include <stdio.h>
/**
 * main - Number in base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	char ch;
	for (i = 48; i < 58; i++)
		putchar(i);
	for (ch = 'a'; ch < 'g'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
