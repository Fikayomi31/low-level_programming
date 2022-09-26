#include <stdio.h>
/**
 * main - prints all possible different combination
 * of two digit
 * Description: print in ascending order
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++) /* first digit */
	{
		for (j = '0'; j <= '9'; j++) /* second digit combination */
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);

				/**
				 * to confirm this is not the last combination
				 * before commas and space
				 */
				if (i != '8' || (i == '8' && j != '9'))
				{
					putchar(44); /* ASCII for , */
					putchar(32); /* ASCII for space */
				}
			}
		}
	}
	putchar(10); /* ASCII for \n */
	return (0);
}
