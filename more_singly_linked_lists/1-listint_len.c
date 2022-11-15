#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - Write a function that returns the number of elements
 * @h: A pointer
 * Return: (l)
 */
size_t listint_len(const listint_t *h)
{
	int l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}
	return (l);
}
