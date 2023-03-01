#include <stdio.h>

/**
 * main - 2D array
 *
 * Return: Always 0
 */
int main(void)
{
	int disp[2][3];
	int i, j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Enter value of disp[%d][%d]:", i, j);
			scanf("%d", &disp[i][j]);
		}
	}

	printf("Two Dimensional array element:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", disp[i][j]);
			if (j == 2)
			{
				printf("\n");
			}
		}
	}
	return (0);
}
