#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * je cree un programme qui dira si le chiffre est posétif ou non
 *
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
