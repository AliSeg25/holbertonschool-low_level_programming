#include "lists.h"
/**
 * get_nodeint_at_index - Write a function that deletes the head node
 * of a listint_t linked list, and returns the head node’s data (n).
 * @head: A pointer.
 * @index: The index.
 * Return:
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int node = 0;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
