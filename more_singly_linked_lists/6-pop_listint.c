#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Frees list.
 * @head: a pointer
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;

	free(temp);

	return (*head);
}
