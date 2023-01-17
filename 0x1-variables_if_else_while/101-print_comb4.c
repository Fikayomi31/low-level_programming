#include <stdio.h>
/**
 * main - possible different combination of three digit
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, k;
	for (i = 48; i < 58; i++)
	{
		j = i + 1;
		for (; j < 58; j++)
		{
			k = j + 1;
			for (; k < 58; k++)
			{
				if ( i != j || j != k)
					putchar(i);
					putchar(j);
					putchar(k);

					if ( i < 56 || j < 57)
						putchar(',');
					putchar(' ');
			}

		}
	}
	putchar('\n');
}
