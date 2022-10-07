#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @nb: variable du nombre
 * Return: a (0]
 */
int print_last_digit(int nb)
{
	int n;

	if (nb > 0)
		n = nb % 10;
	else
		n = -1 * (nb % 10);
	_putchar(n + '0');
	return (n);
}
