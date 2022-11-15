#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - Frees list.
 * @head: a pointer
 */
void free_listint(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
