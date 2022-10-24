#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Écrivez une fonction qui libère une grille à 2 dimensions
 * @grid: grille a liberer
 * @height: la taille de la grille a liberer
 * Return: (void)
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
