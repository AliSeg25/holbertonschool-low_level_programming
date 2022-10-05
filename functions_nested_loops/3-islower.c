#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _islower - Write a function that checks for lowercase character.
 * @c:@c:bhbh
 * Return: 1 si c is caractere return 0 sinon
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
