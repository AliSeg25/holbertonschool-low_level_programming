#include "main.h"
/**
 * _strpbrk - Write a function that searches a string for any of a set of bytes
 * @s: la chaine a chercher premier occurrence
 * @accept: Dela chaine accept
 * Return: (0) ou a (s) la premier occurrence
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (s[i] != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[i] == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
