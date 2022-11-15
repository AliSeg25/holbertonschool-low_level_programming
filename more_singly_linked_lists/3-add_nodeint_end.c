#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *add_nodeint_end - Write a function that adds a new node at the end
 * @head: a pointer to the first node in the list
 * @n: int
 * Return: (NULL)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newli;
	listint_t *fin;

	newli = malloc(sizeof(listint_t));
	if (newli == NULL)
	{
		return (NULL);
	}

	newli->n = n;
	newli->next = NULL;

	if (head == NULL)
	*head = newli;

	else
	{
		while (fin->next != NULL)
			fin = fin->next;

		fin->next = newli;
	}

	return (newli);
}
