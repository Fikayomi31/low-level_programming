#include <stdio.h>
/**
 * main - Entry point
 * Description: printing the first fibonacci number starting with 1 and 2
 *
 * Return: Alway 0
 */

int main(void)
{
	int count = 0; /*variabke for counting */
	long int a = 1, b = 2, next;
	
	printf("%lu, ", a); /*printing the first digit */
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", b);
		}
		else
		{
			printf("%lu, ", a);
		}
		next = b; /*casting b into next varaiable */
		b += a; /*adding b and a */
		a = next;
		count++;
	}
	putchar('\n');
	return (0);
}
