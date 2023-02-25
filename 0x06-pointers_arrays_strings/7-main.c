#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what come.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);

	return (0);

}
