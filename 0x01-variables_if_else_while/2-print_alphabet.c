/* program that print alphabet in lowercase */
#include <stdio.h>
#include <time.h>
/**
 * main - lowercase alphabet
 *
 * Description: printing of alphabet in lowercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	int ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		putchar(ab);
	}
	putchar('\n');
	return (0);
}
