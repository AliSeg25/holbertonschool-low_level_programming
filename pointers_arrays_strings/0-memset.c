#include "main.h"
/**
 * *_memset - Write a function that fills memory with a constant byte.
 * @s: la case a remplir avec b
 * @b: la valeur constante a mettre s[]
 * @n: le nombre de case a remplir
 * Return: (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (s[i] < n)
	{
		s[i] = b;
		i++
	}
	return (s);
}
