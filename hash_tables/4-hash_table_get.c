#include "hash_tables.h"
/**
 * hash_table_get - Write a function that retrieves a value associe with key.
 * @ht: is the hash table you want to look into
 * @key: the keys of value
 * Return: (NULL) ou (value)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];

	while (strcmp(node->key, key) != 0)
		node = node->next;

	if (node == NULL)
		return (NULL);

	else
		return (node->value);
}
