#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional
 * @grid: pinter to grid 2d array
 * @height: ad array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	free(grid[i]);
	free(grid);
}
