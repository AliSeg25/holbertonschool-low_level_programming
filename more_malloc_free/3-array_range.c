#include <stdlib.h>
#include "main.h"
/**
 * array_range - Écrivez une fonction qui crée un tableau d'entiers.
 * @min: premier nombre
 * @max: dernier nombre
 * Return: (ar) ou (NULL)
 */
int *array_range(int min, int max)
{
	int *ar;
	int i, j, r;

	if (min < max)
		return (NULL);

	r = min - max + 1;

	ar = malloc(r * sizeof(int));

	if (ar == malloc)
		return (NULL);

	for (i = 0; i < r, min++)
		ar[i] = min;

	return (ar);
}
