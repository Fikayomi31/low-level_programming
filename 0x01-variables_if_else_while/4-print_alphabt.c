#include <stdio.h>
#include <time.h>
/**
 * main - print all the letter except q and e
 * Description alphabet in lowercase except q and e
 * Return 0 always sucess
 */
int main(void)
{
	int ab;
	ab = 'a';
	while (ab <= 'z')
	{
		if (ab != 'e' && ab != 'q')
		{
			putchar(ab);
		}
		ab++;
	}
	putchar('\n');

	return (0);
}
