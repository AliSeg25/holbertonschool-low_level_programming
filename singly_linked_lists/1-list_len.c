/**
 * list_len - Write a function
 *returns the number of elements in a linked list_t list.
 * @h: la liste
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	int l = 0;

	while (h != NULL)
	{
		l++;
		h = h->next;
	}
	return (l);
}
