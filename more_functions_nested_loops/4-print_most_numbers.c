#include "main.h"
/**
 * print_most_numbers - Write a function that prints the numbers, from 0 to 9,
 *
 * Return: (nb)
 */
void print_most_numbers(void)
{
	int nb;

	for (nb = '0'; nb <= '9'; nb++)
	{
		if (nb != '2' && nb != '4')
			_putchar(nb);
	}
	_putchar('\n');
}
