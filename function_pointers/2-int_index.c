#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * Description: searches for an integer
 * @array: array to look in
 * @size: size of the array
 * @cmp: pointer to the function used to compare values
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || size <= 0 || array == NULL)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]))
		return (i);
	}
	return (-1);
}
