#include"main.h"
#include <stdio.h>
/**
 * swap_int - Write a function that swaps the values of two integers.
 * @a: valeur a changer
 * @b: valeur a changer
 *
 * Return: void
 *
 */
void swap_int(int *a, int *b)
{
	int echange = 0;

	echange = *a;
	*a = *b;
	*b = echange;
}
