#include "lists.h"
#include <string.h>
/**
 * add_node_end - new node at the end
 * @head: a pointer to the first node in the list
 * @str: The string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newli;
	list_t *fin;
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

	if (*head ==  NULL)
	*head = newli;

	else
	{
		fin == *head;

		while (fin->next != NULL)
			fin = fin->next;
	}
	return (newli);
}
