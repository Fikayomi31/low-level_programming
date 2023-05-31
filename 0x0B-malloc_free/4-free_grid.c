#include "main.h"

/**
 * free_grid - free 2D array previously created
 * @grid: a 2D areay
 * @height: the number of row of the array
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0)
		return;
	/* loop through the row */
	for (i = 0; i < height; i++)
		/* free each row */
		free(grid[i]);
	/* free memory allocated to the array */
	free(grid);
}
