#include "main.h"
/**
 *print_alphabet_x10 - programme x10
 * imprimer 1àlphabet 10 fois l'halphabet
 * revnir a la ligne une fois les instruction fini
 */
void print_alphabet_x10(void)
{
	int let, x10 = 0;

	while (x10 < 10)
	{
		for (let = a; let <= z; let++)
		{
			_putchar(let);
		}
		x10++;
		_putchar('\n');
	}
}
