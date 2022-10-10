#include "main.h"
/**
 * _puts - write a function that print a string
 * @str: variable
 * return: (0)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
