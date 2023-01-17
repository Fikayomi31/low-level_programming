#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: alphabet in lowercase
 *
 * Return: Alway 0
 */
int main(void)
{
	char i;
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	i = 'a';
	while (i <= 'z')
	{
		putchar(i);
	
		i++;
		
	}
	putchar('\n');
	return (0);
}
