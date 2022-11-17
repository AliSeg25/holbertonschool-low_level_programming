#include "main.h"
/**
 * get_bit - Write a function that returns the value of a bit at a given index.
 * @n: The bit.
 * @index: The index to get the value at - indices start at 0.
 * Return:
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int res;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	res = (n >> index) & 1;

	return (res);
}
