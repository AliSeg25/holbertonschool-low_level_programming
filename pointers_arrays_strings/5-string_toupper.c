#include "main.h"
/**
 * string_toupper - Write a function that reverses a string.
 * @s: pointeur
 * Return: (s)
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;
		i++;
	}
	return (s);
}
