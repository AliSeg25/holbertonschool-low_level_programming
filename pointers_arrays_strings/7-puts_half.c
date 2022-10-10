#include "main.h"
/**
 * puts_half - 6. Half the lies they tell about me aren't true
 * @str: input string
 * Return:
 */
void puts_half(char *str)
{
	int len = 0;
	int half, n;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		half = (len / 2);
		while (half < len)
		{
			_putchar(str[half]);
			half++;
		}
		_putchar('\n');
	}
}
