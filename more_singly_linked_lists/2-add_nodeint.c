#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *add_nodeint - Write a function that adds a new node at the beginning
 * @head: a pointer to the first node in the list
 * @n: int
 * Return: (NULL)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newli;
	int l = 0;

	newli = malloc(sizeof(listint_t));
	if (newli == NULL)
	{
		return (NULL);
	}

	while (n[l])
		l++;

	newli->n = n;
	newli->next = *head;

	*head = newli;

	return (newli);
}
