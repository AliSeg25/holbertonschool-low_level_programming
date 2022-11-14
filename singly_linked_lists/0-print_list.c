# include "lists.h"
/**
 * print_list - Write a function that prints all the elements of a list_t list.
 * @h: la liste
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int l = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		l++;
		h = h->next;
	}

	return (l);
}
