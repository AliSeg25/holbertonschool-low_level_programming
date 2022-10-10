#include "main.h"
/**
 * puts_half - 6. Half the lies they tell about me aren't true
 * @str: input string
 * Return:
 */
void puts_half(char *str)
{
	int l = 0;
	int nl = 0;

	while (str[l] != '\O')
	{
		l++;
	}

	if (l % 2 == 0)
	{
		nl = (l / 2);

		while (stre[nl] != '\0')
		{
			_putchar(str[nl]);
		nl++;
		}
	}
	_putchar('\n');
}
