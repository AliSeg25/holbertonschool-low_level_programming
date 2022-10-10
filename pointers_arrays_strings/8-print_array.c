#include <stdio.h>
#include "main.h"
/**
 * print_array - 8. Arrays are not pointers
 * @a: variable tableau
 * @n: nombre d'ellement tableaux
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

while (i < n)
{
printf("%d", a[i]);
if (i < (n - 1))
printf(", ");
i++;
}

printf("\n");
}
