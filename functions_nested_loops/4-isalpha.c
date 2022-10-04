#include <stdio.h>
#include <stdlib.h>
#include"main.h"
#include "main.h"
/**
 * je cree un programme qui va faire la difference entre un caractere ou non
 * si ces en caractere il return 1
 * si non il return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
