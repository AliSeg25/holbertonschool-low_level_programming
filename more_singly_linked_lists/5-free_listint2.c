#include <stdio.h>
65;6003;1c#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - Frees list.
 * @head: a pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return(NULL);

	while ((*head) != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	head = NULL;
}
