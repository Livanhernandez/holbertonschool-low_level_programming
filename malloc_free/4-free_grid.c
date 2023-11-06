#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - free memory
 * @grid: paramenter
 * @height: parameter
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
