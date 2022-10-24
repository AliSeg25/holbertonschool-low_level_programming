#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Écrivez une fonction qui alloue de la mémoire pour un tableau
 * @nmemb: le nombre d'element
 * @size: la taille de l'ellement a allouer
 * Return: (null) ou (ar)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ar = malloc(size * nmemb);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		ar[i] = 0;

	return (ar);
}
