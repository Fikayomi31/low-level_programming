#include <stdio.h>
/**
 * print all possible different combination of two digit
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		j = i + 1;
		for (; j < 58; j++)
		{
			if (i != j)
				putchar(i);
				putchar(j);
				if (i != 56 || j != 57)
					putchar(',');
				putchar(' ');
		}


	}
	putchar('\n');

	return (0);
}
