#include <stdio.h>
#include <time.h>
/**
 * main - alphabet in lowercase and uppercase
 * follow by new line
 * Return 0 always
 */
int main(void)
{
	int ab;

	/* alphabet in lowercase */
	for (ab = 'a'; ab <= 'z'; ab++)
		putchar(ab);

	/* alphabet in uppercase */
	for (ab = 'A'; ab <= 'Z'; ab++)
		putchar(ab);
	/* new line */
	putchar('\n');
	return (0);
}
