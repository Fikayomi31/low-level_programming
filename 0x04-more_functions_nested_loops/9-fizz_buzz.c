#include "main.h"

/**
 * main - print number from 1 - 10, for multiple of 3 print Fizz
 * for multiple of 5 print Buzz and for multiple of 3 and 5 print
 * FizzBuzz
 * Return: Always 0
 */

int main(void)
{
	int i;
	for (i =1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");

	}
	putchar('\n');

	return (0);

}
