#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print _putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char str[] = "_putchar";
	int len, i;
	/* get the length of strings */
	len = strlen(str); 
	for (i = 0; i < len; i++)
		putchar(str[i]);
	putchar('\n');

	/* in another format */
	putchar('_');
	putchar('p');
	putchar('u');
	putchar('t');
	putchar('c');
	putchar('h');
	putchar('a');
	putchar('r');
	putchar('\n');
}
