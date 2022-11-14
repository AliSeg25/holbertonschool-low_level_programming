/**
 * add_node - new node at the beginning
 * @head: a pointer to the first node in the list
 * @str: The string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t newli;
	char *newstr;

	newli = malloc(sizeof(list_t));
	if (newli == NULL)
		return (NULL);

	newstr = strdup(str);

	newli->str = newstr;
	newli->next = head;

	return (new);
}
