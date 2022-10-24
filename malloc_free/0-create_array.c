#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - Écrivez une fonction qui crée un tableau de caractères et
 * @size: taille tableau
 * @c: le caractére a remplir dans la zone memoire
 * Return: (null) ou (ar)
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(size * sizeof(char));

	if (ar == 0 || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}

	return (ar);

}
