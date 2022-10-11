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

	n = n - 1;
	while (i < n)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
		i++;
		n--;
	}

}
