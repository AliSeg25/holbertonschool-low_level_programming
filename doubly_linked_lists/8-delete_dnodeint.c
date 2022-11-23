#include "lists.h"
/**
 * delete_dnodeint_at_index - Write a function that deletes the node at index.
 * @head: The  double pointeur
 * @index: index add new node
 * Return: (1) ou (-1)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int node;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;

		if (*head != NULL)
			(*head)->prev = NULL;

		free(tmp);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}

	tmp->prev = tmp->next->prev;
	tmp->prev->next = tmp->next;

	return (1);
}
