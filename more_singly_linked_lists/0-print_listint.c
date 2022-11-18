#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - Write a function that prints all the elements.
 * @h: A pointer.
 * Return: (l)
 */
size_t print_listint(const listint_t *h)
{
	int l = 0;

	while (h)
	{
		printf("%d\n", h->n);
		l++;
		h = h->next;
	}
	return (l);
}
