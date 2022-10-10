#include <stdio.h>
#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: variable a imprimer
 * Return: void
 */
void print_rev(char *s)
{
	int fin = 0;
	int i = 0;

	while (*s != '\0')
	{
		fin++;
		s++;
	}

	for (i = fin - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
