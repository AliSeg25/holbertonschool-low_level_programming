#include <stdio.h>
#include <stdlib.h>
#include"main.h"
#include "main.h"
/**
 * je cree un programme qui va faire la difference entre une minuscule ou non
 * si ces en miniscule il return 1
 * si ces une majuscule il return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
