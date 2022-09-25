#include <stdio.h>
/**
 * main - prints the lowercase alphabets
 *
 * Description: alphabet in reverse followed by new line
 *
 * Reture: Always 0 (success)
 */
int main(void)
{
	char ch;
	/* starting from z to a */
	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
