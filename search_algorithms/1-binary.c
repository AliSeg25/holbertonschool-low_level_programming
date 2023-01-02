#include "search_algos.h"
65;6003;1c/**
 * binary_search - Write a function that searches for a value in sortedarray.
 * @array: the array to search.
 * @size: the size of the array.
 * @value: the value.
 * Return: the index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		size_t pivot = (left + right) / 2;
		size_t i;

		printf("Searching in array: ");

		for (i = left; i <= right; i++)
			printf("%d, ", array[i]);

		printf("\n");

		printf("Value checked array[%ld] = [%d]\n", pivot, array[pivot]);

		if (array[pivot] == value)
			return (pivot);

		else if (array[pivot] > value)
			right = pivot - 1;
		else
			left = pivot + 1;
	}

	return (-1);
}
