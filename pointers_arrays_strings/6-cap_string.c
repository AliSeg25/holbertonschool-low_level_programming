#include "main.h"
/**
 * cap_string - Write a function that capitalizes all words of a string.
 * @as: pointeur
 * Return: (âs)
 */
char *cap_string(char *as)
{
	int i = 0;

	while (as[i] != '\0')
	{
		if (as[i] >= 'a' && as[i] <= 'z')
			as[i] -= 32;
		i++;
	}
	return (as);
}
