#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - Écrivez une fonction qui concatène deux chaînes.
 * @s1: chaine
 * @s2: chaine
 * Return: () ou ()
 */
char *str_concat(char *s1, char *s2)
{

	char *ar;
	int i = 0;
	int j = 0;
	int r = 0;
	int k;

	if (s1 == NULL)
		i = 0;

	else
	{
		for (i = 0; s1[i]; i++)
			;
	}

	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}

	r = i + j + 1;

	ar = malloc(r*sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}

	for(k = 0; k < i; k++)
	{
		ar[k] = s1[k];
	}

	for(k = 0; k < j; k++)
	{
		ar[k + i] = s2[k];
	}

	ar = '\0';

	return (ar);
}
