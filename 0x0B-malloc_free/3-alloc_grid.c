#include <stdio.h>
#include <stdlib.h>

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
		/* allocating memory to thr column */
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}



