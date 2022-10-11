#include "main.h"

/**
 * _strcat - 0. strcat
 * @src: chaine premier
 * @dest: chaine deuxieme
 *
 * Return: (dest)
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int i = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[i] != '\0')
	{
		dest[a] = src[i];
		a++;
		i++;
	}

	return (dest);
}
