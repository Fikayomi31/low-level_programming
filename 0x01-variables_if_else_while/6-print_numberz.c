#include <stdio.h>
/**
 * main - print all single digit number of base 10 with putchar only
 *
 * Return: Alway 0
 */
int main(void)
{
	int i;
	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
