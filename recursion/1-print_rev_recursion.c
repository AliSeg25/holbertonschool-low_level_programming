#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - Write a function that prints a string in reverse.
 * @s: le pointeur vers le strings
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	else
	{
		_print_rev_recursion(s + 1);
	}

	putchar(*s);
}
