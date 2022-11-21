#include "lists.h"
/**
 * insert_dnodeint_at_index -  Write a function that frees a dlistint_t list.
 * @h: The  double pointeur
 * @idx: index add new node
 * @n: values new node
 * Return: (new)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int node;
	dlistint_t *new;
	dlistint_t *tmp = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	for (node = 0; node < (idx - 1); node++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
