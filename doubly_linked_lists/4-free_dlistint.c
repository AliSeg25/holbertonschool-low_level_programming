#include "lists.h"
/**
 * free_dlistint -  Write a function that frees a dlistint_t list.
 * @head: the pointeur
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
