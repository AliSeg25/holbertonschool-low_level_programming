#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid -
 * @width:
 * @height:
 * Return:
 */

int **alloc_grid(int width, int height)
{
int i, j;
	int **ar;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = (int **)malloc(height * sizeof(int *));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = (int *)malloc(width * sizeof(int));
/**
		if (ar[i] == NULL)
		{
			for (j = 0; j < height; j++)
				free(ar[j]);
			free(ar);
			return (NULL);
		}
*/
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
