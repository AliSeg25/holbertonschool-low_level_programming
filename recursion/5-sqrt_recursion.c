#include <stdio.h>
#include "main.h"
/**
 * fd - fonction qui va etre appeler par la fonction sqrt pour trouver racine
 * @i: le nombre au carre
 * @n: la racine carré a trouver
 * Return: (fd)
 */
int fd(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (fd(i + 1, n));
}

/**
 * _sqrt_recursion - Write a function that returns the natural square root of a
 * @n: la racine care a trouver
 * Return: (fd)
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (fd(1, n));
}
