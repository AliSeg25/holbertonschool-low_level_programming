#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _isalpha - Write a function that checks for alphabetic character.
 * @c: ces la variable qui va nous servir a verifie
 * Return: Always 0 (nice)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
