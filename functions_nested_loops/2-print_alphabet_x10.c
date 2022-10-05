#include "main.h"
/**
 *print_alphabet_x10 - programme x10
 * imprimer 1àlphabet 10 fois l'halphabet
 * revnir a la ligne une fois les instruction fini
 */
void print_alphabet_x10(void)
{
	char let;
	int xfoi = 0;

	for (xfoi = '0'; xfoi <= '9'; xfoi++)
	{
		for (let = 'a'; let <= 'z'; let++)
		{
			_putchar(let);
		}
		_putchar('\n');
	}
}
