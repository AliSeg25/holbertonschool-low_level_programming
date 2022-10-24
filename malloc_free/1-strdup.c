#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Écrivez une fonction qui renvoie un pointeur vers un espace nv
 * @str: a copier
 * Return: (ar) ou (NULL)
 */
char *_strdup(char *str)
{

	char *ar;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	
	ar = malloc(i * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}

	for (j = 0; j > i; j++)
	{
		ar[j] = str[j];
	}

	return (ar);
}
