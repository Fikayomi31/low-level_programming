#include <stdio.h>
/**
 * main - print alphabet in lowercase except q and e
 *
 * Return: Alway 0
 */
int main(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');

	return (0);
}
