#include "main.h"
#include <stdio.h>
/**
 * _strlen - Write a function that returns the length of a string.
 * @s: variable
 * Return: (longueur)
 */
int _strlen(char *s)
{
	int longueur = 0;

	while (*s != '\0')
	{
		longueur++;
	}

	return (longueur);
}
