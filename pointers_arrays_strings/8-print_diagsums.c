#include"main.h"
#include <stdio.h>
/**
 * print_diagsums - Write a function that prints the sum of the two diagona
 * @a: pointer
 * @tb: tableau longeur
 *
 * Return: void
 */
void print_diagsums(int *a, int tb)
{
	int i, j, p, l = 0, r = 0;

	for (i = 0; i < tb; i++)
	{
		p = (i * tb) + i;
		l += *(a + p);
	}
	for (j = 0; j < tb; j++)
	{
		p = (j * tb) + (tb - 1 - j);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);
}
