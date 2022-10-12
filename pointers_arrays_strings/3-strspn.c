#include "main.h"
/**
 * _strpbrk - Write a function that gets the length of a prefix substring.
 * @s: la chaine a rechercher
 * @accept: la chaine qui recherche
 * Return: (s) ou 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return (0);
}
