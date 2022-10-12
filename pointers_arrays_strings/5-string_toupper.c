#include "main.h"
/**
 * string_toupper - Write a function that reverses a string.
 * @as: pointeur
 * Return: (as)
 */
char *string_toupper(char *as)
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
