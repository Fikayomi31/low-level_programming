#include <stdio.h>
/**
 * main - program that print all single digit
 * number of base 10
 * Description: 0 to base 10 followed by new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	/* using ASCII value of number */
	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
