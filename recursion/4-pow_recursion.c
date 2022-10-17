#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - Write a function that returns the value of x raised to y
 * @x: nombre a elever a la puissance de la valeur y
 * @y: la valeur qui nous servira a élever n
 * Return: (x)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * (_pow_recursion(x, y - 1)));
}
