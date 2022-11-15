#include "lists.h"
/**
 * delete_nodeint_at_index - Write a function that inserts anew node at a given
 * position.
 * @head: A pointer.
 * @index: The index.
 * Return: (1) ou (-1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *copy;
	unsigned int node = 0;

	copy = *head;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
	}

	temp = copy->next;
	copy->next = temp->next;
	free(temp);

	return (1);
}
