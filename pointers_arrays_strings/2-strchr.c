#include "main.h"
/**
 * *_strchr - Write a function that locates a character in a string.
 * @s: a trouve
 * @c: a chercher
 * Return: si trouve (s) si non (0)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{

		if (s[i] == c)
		{
			return (s);

		}

		i++;
		   return (0);

	}
	if (s[i] == c)
	{
		return (s);
	}
	return (0);
}
