#include "main.h"
/**
 * reverse_array - Write a function that reverses the contentvaleur
 * @n: nombre d'ellemennt
 * @a: tableau
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int t = 0;
	int j = 0;

	while (a[i] != '\0')

	{
		i++;
	}

	i--;
	n = n - 1;
	while (j < n)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		j++;
		i--;
	}

}
