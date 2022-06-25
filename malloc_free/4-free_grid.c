#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional
 * @gird: pinter to grid 2d array
 * @height: ad array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
		i++;
	free(grid[i]);
	free(grid);
}
