#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * je cree un programme qui dira si le chiffre est posétif ou non
 *
 *
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = (-1) * a;
		return (a);
	}
	else if (a > 0)
		return (a);
	return (0);
}
