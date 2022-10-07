#include "main.h"
/**
 * print_triangle - Write a function that prints a triangle, followed by a new
 *
 * @size: size of the triangle.
 */

void print_triangle(int size)
{
	int i = 1;
	int j = 0;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size - i; j++)
			{
				_putchar(' ');
			}
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
