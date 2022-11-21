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
	dlistint_t *tmp;

	tmp = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = tmp;
		tmp->next = new;

		*h = new;
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	new->next = tmp->next;
	tmp->next = new;
	new->prev = tmp;

	tmp = tmp->next;

	tmp->prev = new;

	return (new);
}
