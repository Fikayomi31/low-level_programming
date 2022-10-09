#include <stdlib.h>
#include <time.h>
/**
 * main - random number
 *
 * Description: print postive if greater 0, zero if is equal to 0
 * negative if less than 0
 *
 * Return: Alway 0 (success)
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
