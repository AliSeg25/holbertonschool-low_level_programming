#include "main.h"
/**
 * _strpbrk - Write a function that gets the length of a prefix substring.
 * @s: la chaine a rechercher
 * @accept: la chaine qui recherche
 * Return: (r)
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int r = 0;

	while (s[i] != '\0')
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
		s++;
	}
	return (r);
}
