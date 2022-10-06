#include "main.h"
/**
 * print_numbers - Write a function that prints the numbers, from 0 to 9, foll
 *
 * Return: void
 */
void print_numbers(void)
{
	int nb;

	for (nb = '0'; nb <= '9'; nb++)
	{
		_putchar(nb);
	}
	_putchar('\n');
}
