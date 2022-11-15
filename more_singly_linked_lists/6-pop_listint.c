#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Write a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)..
 * @head: a pointer
 * Return: (NULL) ou (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (n);
}
