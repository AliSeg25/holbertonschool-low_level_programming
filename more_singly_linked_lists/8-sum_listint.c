#include "lists.h"
/**
 * sum_listint - Write a function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: A pointer.
 * Return: (0) OU (NULL)
 */
int sum_listint(listint_t *head)
{
	int res = 0;

	while (head)
	{
		if (head == NULL)
			return (0);

		res += head->n;
		head = head->next;

	}

	return (res);
}
