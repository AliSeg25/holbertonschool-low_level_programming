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
		i++

		if (s[i] == c)
		{
			return (s);

		}
		else
			return (0);

	}
	return (0);
}
