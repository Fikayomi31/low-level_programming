#include <stdio.h>
/**
 * main - print all possible combinations of single digit number
 * separated by , and space
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 48;
	for (; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			
			putchar(',');
			putchar(' ');
		}
	}
		
	putchar('\n');

	return (0);
}
