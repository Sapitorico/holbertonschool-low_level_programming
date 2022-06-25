#include <stdio.h>
#include <stdlib.h>

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
		i++;
	free(grid[i]);
	free(grid);
}
