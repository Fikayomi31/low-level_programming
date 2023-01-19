#include <stdio.h>

/* print_alphabet: print 10 times the alphabet in lowercase
 *
 * Description: 10 times the alphabet in lowercase
 *
 * Return: Alway 0
 */
voidbprint_alphabet_x10(void)
{
	char c;
	int i;
	for (i = 0; i <= 10; i++)
	{
		for (c ='a'; c <= 'z'; c++)
			putchar(c);
		putchar('\n');
	}
	
	
}
