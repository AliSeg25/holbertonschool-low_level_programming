#include "lists.h"
/**
 * get_dnodeint_at_index -  Write a function that frees a dlistint_t list.
 * @head: The pointeur
 * @index: The index a return
 * Return: The index ()
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
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
