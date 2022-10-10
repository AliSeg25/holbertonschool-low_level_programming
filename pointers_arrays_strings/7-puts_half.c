#include "main.h"
/**
 * puts_half - 6. Half the lies they tell about me aren't true
 * @str: input string
 * Return:
 */
void puts_half(char *str)
{
	int l = 0;
	int ln;
	int a;

	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
		ln = (l / 2);
		while (ln < l)
		{
			_putchar(str[ln]);
			ln++;
		}
		_putchar('\n');
	}

	else if (l % 2 != 0)
	{
		a = ((l / 2) + 1);
		while (a < l)
		{
			_putchar(str[a]);
			a++;
		}
		_putchar('\n');
	}

}
