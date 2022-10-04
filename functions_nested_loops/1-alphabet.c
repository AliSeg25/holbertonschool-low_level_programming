#include"main.h"
/**
 * print_alphabet - Entry point
 * description - print alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alph;
	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
