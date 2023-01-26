#include "main.h"
/**
 * main - Entry point
 * Description: sum of all multiples of 3 or 5 and below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	int sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%i\n", sum);

	return (0);
}
