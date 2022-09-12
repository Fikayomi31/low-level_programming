/* program to generate positive, negative and zero element */

#include <stdio.h>
#include <time.h>
/**
 * main - prints the last digit of the random
 *
 * Number stored in the variable n
 *
 * Return: Always 0 (successs)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
