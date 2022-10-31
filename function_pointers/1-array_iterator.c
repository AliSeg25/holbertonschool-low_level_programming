#include "function_pointers.h"
/**
 * array_iterator - ecrire une fonction qui execute une fontion
 * @array: tableau
 * @size: taille tableau
 * @action: fonction qui doit etre executer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
long unsigned int i = 0;

if (array == NULL || size <= 0 || action == NULL)
return;

for (i = 0; i < size; i++)
action(array[i]);
}
