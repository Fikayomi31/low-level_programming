#include <stdio.h>
/**
 * main - prints all possible combination of single digit
 *
 * Description: combination of single digit with
 * comma and space in between
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	/* ASCII char of 0-10 is 48-58 */
	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44); /* ASCII char for , */
			putchar(32); /* ASCII char for space */
		}
	}
	putchar('\n');
	return (0);
}
