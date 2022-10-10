#include "main.h"
/**
 * rev_string - Write a function that reverses a string.
 * @s: string pointer
 * Return: void
 */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	c--;

	while (b < c)
	{
		a = s[c];
		s[c] = s[b];
		s[b] = a;
		b++;
		a--;
	}
}
