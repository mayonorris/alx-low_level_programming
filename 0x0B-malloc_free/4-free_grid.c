#include "main.h"
#include <stdlib.h>
/**
 * free_grid - A function that frees a 2D array previously
 * created by the malloc_grid function
 * @grid: An input 2D array
 * @height: height of grid
 * Return: Nothing
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

