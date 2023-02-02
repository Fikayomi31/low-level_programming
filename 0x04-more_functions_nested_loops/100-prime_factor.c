#include <stdio.h>
#include <math.h>

/**
 * main - print the largest prime factor of the number
 *
 * Description: prime number of this number 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	long c;
	long num = 612852475143;

	for (c = 2; c < num; c++)
	{
		while (num % c == 0)
		{
			num = num / c;
		}
	}
	
	printf("%lu\n", num);

	return (0);

}
