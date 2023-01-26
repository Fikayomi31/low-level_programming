#include <stdio.h>
/**
 * main - Entry point
 * Description: printing the first fibonacci number starting with 1 and 2
 *
 * Return: Alway 0
 */

int main(void)
{
	int i = 0;
	long int a = 1, b = 2, next;
	
	printf("%lu, ", a);
	while (i < 50)
	{
		if (i == 50)
		{
			printf("%lu\n", b);
		}
		else
		{
			printf("%lu, ", a);
		}
		next = b;
		b += a;
		a = next;
		i++;
	}
	putchar('\n');
	return (0);
}
