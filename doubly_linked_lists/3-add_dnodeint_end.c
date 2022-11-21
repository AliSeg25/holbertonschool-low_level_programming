#include "lists.h"
/**
 * add_dnodeint_end - Write a function that adds a new node at the end.
 * @head: the pointeur
 * @n: to add new node
 * Return: The number of nodes in the list.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, fin;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		fin = *head;

		while (fin->next != NULL)
			fin = fin->next;

		fin->next = new;
		new->prev = fin;

	}
	return (new);
}
