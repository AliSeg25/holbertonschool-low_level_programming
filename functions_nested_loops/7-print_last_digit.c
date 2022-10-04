#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * je cree un programme qui dira si le chiffre est posétif ou non
 *
 *
 */
int print_last_digit(int nb)
{
	if (nb <= -10)
	{
		nb = nb % 10 * -1;
		_putchar(nb + '0');
	} else if (nb >= 10)
	{
		nb = nb % 10;
		_putchar(nb + '0');
	} else if (nb > -1)
	{
		nb = nb;
		_putchar(nb + '0');
	} else
	{
		nb = nb + -1;
		_putchar(nb + -1 + '0');
	}
	return (nb);
}
