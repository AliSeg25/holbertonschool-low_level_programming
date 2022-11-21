#include "lists.h"
/**
 * add_dnodeint - Write a function that adds a new node at the beginning.
 * @head: the pointeur
 * @n: to add new node
 * Return: The number of nodes in the list.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if(new == NULL)
		return(NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	*head  = new;

	free(new);

}
