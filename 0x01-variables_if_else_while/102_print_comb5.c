#include <stdio.h>
/**
 * main - print all the possible combination of two two digit number
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, k, n;
	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			k = i;
			for (; k < 58; k++)
			{
				n = k + 1;
				for (; n < 58; n++)
				{
					if (((k + n) > (i + j) && k >= i) || i < k)
						putchar(i);
						putchar(j);
						putchar(' ');

						putchar(k);
						putchar(n);
						if ( k < 56 || n < 57 || i < 56 || j < 57)
							putchar(',');
						putchar(' ');
				}
			}
		}

	}
	putchar('\n');

	return (0);
}
