#include <stdio.h>
/**
 * main - print all single digit numbers
 *
 * Description: number of base 10 stsrting from 0
 * followed by new line
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int i;

	/* number from 0 to 10 */
	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
