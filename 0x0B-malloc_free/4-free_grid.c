#include <stdlib.h>
/**
 * free_grid - function that free allocated memory of 2D
 * pointer arrays
 * @grid: pointer to pointer grid
 * @height: argument
 * Return: Pointer to pointer array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
