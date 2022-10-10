#include "main.h"
#include <stdio.h>
/**
 * _strlen - Write a function that returns the length of a string.
 * @s: variable
 * Return: (*s)
 */
int _strlen(char *s)
{

	while (*s != \0)
	{
		*s++;
	}

	return (*s);
}
