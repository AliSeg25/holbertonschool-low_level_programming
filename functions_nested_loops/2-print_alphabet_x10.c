#include "main.h"
/**
 * imprimer 1à fois l'halphabet
 * revnir a la ligne une fois les instruction fini
 */
void print_alphabet_x10(void)
{
	int alph, time = 0;

	while (time < 10)
	{
		for (alph = 97; alph <= 122; alph++)
		{
			_putchar(alph);
		}
		time++;
		_putchar('\n');
	}
}
