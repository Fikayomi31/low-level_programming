#include "main.h"

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width < 1 || height < 1)
		return (NULL);
	/* allocting memory for the row */
	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);
	
	/* looping for the colummn */
	for (i = 0; i < height; i++)
	{
		/* allocating memory to the column */
		grid[i] = malloc(width * sizeof(**grid));
		/* check if allcated memory is 0 */
		if (grid[i] == 0)
		{
			/* reverse looping */
			for (i--; i >= 0; i--)
				/* free the memory for which row */
				free(grid[i]);
			/* free memory for 2-dimensional array */
			free(grid);
			return (NULL);
		}
		/* initializing to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}



