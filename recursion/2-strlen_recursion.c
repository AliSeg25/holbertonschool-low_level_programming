#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - Write a function that returns the length of a string
 * @s: le pointeur vers le strings
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
