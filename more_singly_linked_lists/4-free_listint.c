#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - Frees list.
 * @head: a pointer
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->n);
		free(head);
		head = temp;
	}
}
