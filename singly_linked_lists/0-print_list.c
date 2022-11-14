# include "lists.h"
/**
 * print_list - Write a function that prints all the elements of a list_t list.
 * @h: la liste
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
    list_t l;

        while (h)
        {
            if (h->str == NULL)
		    printf("[0] (nil)\n");

            else
		    printf ("[%d] %s", h->len, h->str);

            l++;
        }

        return (l);
}
