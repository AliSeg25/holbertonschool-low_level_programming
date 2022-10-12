#include "main.h"
/**
 * *_memcpy - Write a function that copies memory area.
 * @dest: ou on colle
 * @src: ou on copie
 * @n: combien on copie
 * Return: (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i > n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
