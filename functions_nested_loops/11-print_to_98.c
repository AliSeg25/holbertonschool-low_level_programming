#include "main.h"
#include "main.h"
/**
 * print_to_98 - Write a function that prints all natural numbers from n to 98
 * @n: variable
 * dernier exercice
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
}
