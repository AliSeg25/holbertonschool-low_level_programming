#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_sign - Write a function that prints the sign of a number.
 * @n: la varible qui va nous servir
 * Return: 1 ou 2 ou 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
	return (-1);
}
