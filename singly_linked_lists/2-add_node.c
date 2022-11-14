#include "lists.h"
#include <string.h>
/**
 * add_node - new node at the beginning
 * @head: a pointer to the first node in the list
 * @str: The string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newli;
	char *newstr;
	int l = 0;

	newli = malloc(sizeof(list_t));
	if (newli == NULL)
		return (NULL);

	newstr = strdup(str);
	if (newstr == NULL)
	{
		free(newli);
		return (NULL);
	}

	while (str[l])
	l++;

	newli->str = newstr;
	newli->len = l;
	newli->next = *head;

	return (*head);
}
