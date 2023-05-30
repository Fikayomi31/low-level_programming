#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - return pointer to a 2 dimensional array of integer
 * @width: the row of the array
 * @height: the column of the array
 * mReturn: the array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **matrix;

	/* check if the width and the height is < than 1 */
	if (width < 1 | height < 1)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		matrix = malloc(height * sizeof(*matrix));
		if (matrix == 0)
			return (NULL);

		for (
}
