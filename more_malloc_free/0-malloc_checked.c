#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked -une fonction qui alloue de la mémoireà l'aide malloc
 * @b: memoire a allouer
 * Return: (0) or (98)
 */
void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(b);
	if (ar == NULL)
		exit(98);
	return (ar);
}
