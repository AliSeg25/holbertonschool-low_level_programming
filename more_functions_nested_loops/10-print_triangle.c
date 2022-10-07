#include "main.h"

/**
 * print_triangle - Write a function that prints a triangle, followed by a ne
 *
 * @size: Variable espa
 */
void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (a = 0; a <= size; a++)
		{
			for (b = a; b < size; b++)
			{
				_putchar(' ');
			}

			for (b = 0; b <= a; b++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
