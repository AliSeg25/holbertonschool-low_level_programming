#include "main.h"
/**
 * print_line - Write a function that draws a straight line in the terminal.
 * @n: ligne _______
 * Return: (\n)
 */
void print_line(int n)
{
	int ligne = 0;

	if (n > 0)
	{
		for (; ligne < n; ligne++)
			_putchar('_');
	}
	_putchar('\n');
}
