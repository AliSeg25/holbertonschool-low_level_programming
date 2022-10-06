#include "main.h"
/**
 * print_diagonal - 7. I feel like  am diagonally parked in a parallel universe
 * @n: Variable
 * Return: (\n);
 */
void print_diagonal(int n)
{
	int l = 0;
	int m = 0;

	if (n > 0)
	{
		for (; l < n; l++)
		{
			for (m = 0; m < l; m++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
