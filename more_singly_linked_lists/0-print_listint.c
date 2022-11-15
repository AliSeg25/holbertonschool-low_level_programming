#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer
 */
size_t print_listint(const listint_t *h)
{
	int l = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h++;
		h = h->next;
	}

	return (h);
}
