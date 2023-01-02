#include "search_algos.h"
/**
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
		size_t mid = (left + right) / 2;
		size_t i;

		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
			else
				printf("\n");
		}

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
