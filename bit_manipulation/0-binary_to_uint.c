#include "main.h"
/**
 * binary_to_uint - Write a function that converts a binary number
 * @b: A pointer
 * Return: (NULL) ou (0) ou (1)
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	int multi = 1;
	int res = 0;

	if (b == '\0')
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;
	len--;

	for (;len >= 0; len--)
	{
		if (b[len] != '0' || b[len] != '1')
			return (0);

		res += (b[len] - '0') * multi;
		multi *= 2;
	}

	return (res);
}
