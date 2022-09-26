#include <stdio.h>
/**
 * main - print all possible combination of digit
 * description: three possible combination
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++) /* first combination digit */
	{
		for (b = '0'; b <= '9'; b++) /* second combination digit */
		{
			for (c = '0'; b <= '9'; c++) /* thrid combination digit */
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);

					/* condition for commas and space */
					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
