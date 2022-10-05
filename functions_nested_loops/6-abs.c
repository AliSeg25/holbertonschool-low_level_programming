#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _abs - Write a function that computes the absolute value of an integer.
 * @a: ces la variable qui va nous servir
 * Return: plusieur possibiliter
 */
int _abs(int a)
{
	if (a > 0)
	{
		return (a);
	}
	else if (a < 0)
	{
		return (-a);

	}
	return (0);
}
