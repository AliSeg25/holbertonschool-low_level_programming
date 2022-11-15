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
	listint_t *temp;

	newli = malloc(sizeof(listint_t));

	if (newli == NULL)
		return (NULL);

	newli->n = n;
	temp = *head;

	if (idx == 0)
	{
		temp->next = temp;
		*head = newli;
		return (newli);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	newli->next = temp->next;
	temp->next = newli;

	return (newli);
}
