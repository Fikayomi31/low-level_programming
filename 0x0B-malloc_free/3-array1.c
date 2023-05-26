#include <stdio.h>

/**
 * main - 2D array
 *
 * Return: Always 0
 */
int main(void)
{
	int matrix[4][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
		{0, 1, 2}
	};
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	return (0);
}
