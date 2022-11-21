#include "lists.h"
/**
 * dlistint_len - Write a function that returns the number of elements
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
