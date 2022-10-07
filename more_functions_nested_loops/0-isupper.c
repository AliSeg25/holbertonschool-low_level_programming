#include "main.h"
/**
 * _isupper - Write a function that checks for uppercase character.
 * @c: ces la varible a vérifier
 * Return: return 1 si ces une majuscule sinon return a 0
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
		return (1);
	return (0);
}
