#include "main.h"

/**
 * print_diagsums - function that print sum of 2 diagonal of square matrix of integer
 * @a: the integer
 * @size: size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i++)
	{
		/* the left diagonal down bottom right */
	
		if (i % (size + 1) == 0)
			sum1 += *(a + i);
		/**
		 * the right diagonal down bottom left
		 * it must not be 0
		 * the last digit with not be consider
		 */

		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum2 += *(a + i);
	}
	printf("%d, %d\n", sum1, sum2);
				
}
