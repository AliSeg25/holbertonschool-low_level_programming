#include"main.h"
/**
 * *cap_string - Write a function that capitalizes all words of a string.
 * @st: pointeur
 * Return: (st)
 */

char *cap_string(char *st)
{
	int i = 0;

	if (st[0] >= 'a' && st[0] <= 'z')
	{
		st[0] -= 32;
	}
	while (st[i] != '\0')
	{
		if (st[i] == ',' || st[i] == '.' ||
		    st[i] == ' ' || st[i] == ';' ||
		    st[i] == '\n' || st[i] == '!' ||
		    st[i] == '?' || st[i] == '"' ||
		    st[i] == '(' || st[i] == ')' ||
		    st[i] == '{' || st[i] == '}' ||
		    st[i] == '\t')
		{
			if (st[i + 1] >= 'a' && st[i + 1] <= 'z')
			{
				st[i + 1] -= 32;
			}
		}
		i++;
	}

	return (st);
}
