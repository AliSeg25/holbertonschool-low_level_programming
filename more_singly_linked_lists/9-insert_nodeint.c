#include "lists.h"
/**
 * *insert_nodeint_at_index - Write a function that inserts a new node at a
 * given position.
 * @head: A pointer.
 * @idx: The index.
 * @n: int.
 * Return: (NULL) OU (head)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node = 0;
	listint_t *newli;

	newli = malloc(sizeof(listint_t));

	if (newli == NULL)
		return (NULL);

	for (node = 0; node < (idx - 1); node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	newli -> n = n;
	newli -> next = *head;

	return (newli);
}
