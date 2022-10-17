#include "main.h"
/**
 * _puts_recursion - Write a function that prints a stringfollowed by new line
 * @s: le pointeur vers le strings
 * Return: void
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);

}
