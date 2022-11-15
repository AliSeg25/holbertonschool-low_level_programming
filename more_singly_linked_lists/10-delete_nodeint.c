#include "lists.h"
/**
 * delete_nodeint_at_index - Write a function that inserts a new node at a given
 * position.
 * @head: A pointer.
 * @index: The index.
 * Return:
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *copy;
	int node = 0

	copy = *head;

	for (node = 0; node < index; node++)
	{
		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free (tmp);
}
