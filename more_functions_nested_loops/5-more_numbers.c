#include "main.h"
/**
 * more_numbers - Write a function that prints 10 times the numbers, from 0 to
 *
 * Return: void
 */
void more_numbers(void)

{
	int n = 0;
	int x = 0;

	for (x = 0; x < 9; x++)

	{

		for (n = 48; n < 58; n++)
		{
			putchar(n);
		}
		putchar('1');
		putchar('0');
		putchar('1');
		putchar('1');
		putchar('1');
		putchar('2');
		putchar('1');
		putchar('3');
		putchar('1');
		putchar('4');
		putchar('\n');
	}


}
