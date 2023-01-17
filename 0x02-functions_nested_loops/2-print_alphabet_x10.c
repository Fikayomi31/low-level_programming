#include <stdio.h>

/* main - Entry point
 *
 * Description: 10 times the alphabet in lowercase
 *
 * Return: Alway 0
 */
int main(void)
{
	char c;
	int i;
	for (i = 0; i <= 10; i++)
	{
		for (c ='a'; c <= 'z'; c++)
			putchar(c);
		putchar('\n');
	}
	
	return (0);
}
