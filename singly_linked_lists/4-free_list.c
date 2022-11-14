#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Frees list.
 * @head: a pointer
 */
void free_list(list_t *head)
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
