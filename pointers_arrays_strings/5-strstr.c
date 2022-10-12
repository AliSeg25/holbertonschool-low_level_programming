#include "main.h"
/**
 * _strstr - Write a function that locates a substring.
 * @needle: trouve la premier occurence
 * @haystack: ici
 * Return: (0) ou haystack);
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (needle[j] != '\0')
		j++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if ((haystack[i] == needle[i]) && (i != j))
				haystack++;

			else
				return (haystack);
		}

	}
	return (0);
}
