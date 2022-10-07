#include "main.h"
/**
 * timex_table - table de multiplication
 */
void times_table(void)
{
	int a = 0;
	int b = 0;
	int r = 0;

	for (a = 0; a < 10; a++)
	{
		for (b= 0; b < 10; b++)
		{
			r = a * b;
			if (r > 9)
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			else if (b != 0)
			{
				_putchar(' ');
				_putchar(r + '0');
			}
			else
				_putchar(r + '0');
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
