#include <stdio.h>
#include "main.h"
/**
 * is2 - fonction qui va chercher si n est un nombre premier
 * @n: variable a verifie
 * @b: nombre qui teste
 * Return: si nombre premier (1) sinon (0)
 */

int is2(int n, int b)
{
	if (n <= 1 || n % i == 0)
		return (0);

	else if (n == i)
		return (1);

	else if (n > i)
		is2(n, i + 1);

	return (1);
}

/**
 * is_prime_number - Write a function that returns 1 if the input integer is
 * @n: variavle a verifier
 * Return: (is2)
 */

int is_prime_number(int n)
{
	return (is2(n, 2));
}
