#include "main.h"
/**
 * _strspn - Write a function that gets the length of a prefix substring.
 * @s: la chaine a rechercher
 * @accept: la chaine qui recherche
 * Return: (r)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int r = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					r++;
			}
		}
		else
			return (r);

	}
	return (r);
}
