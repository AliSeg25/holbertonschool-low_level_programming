#include "main.h"
/**
 * string_toupper - Write a function that reverses a string.
 * @al: pointeur
 * Return: (al)
 */
char *string_toupper(char *al)
{
	int i = 0;

	while (al[i] != '\0')
	{
	if ((al[i]) >= 'a' && (al[i]) <= 'z')
		(al[i]) = ('a' - 'A');
		i++;
	}
	return (al);
}
