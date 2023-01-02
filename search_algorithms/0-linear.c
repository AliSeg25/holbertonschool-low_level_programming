#include "search_algos.h"
/**
 * linear_search - Write a function that searches for a value in an array.
 * @array: the array to search.
 * @size: the size of the array.
 * @value: the value.
 * Return: the index or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
