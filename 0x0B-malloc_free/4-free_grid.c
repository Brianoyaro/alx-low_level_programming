#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2-D grid
 * @grid: grid to be freed
 * @height: rows comtained in array grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
