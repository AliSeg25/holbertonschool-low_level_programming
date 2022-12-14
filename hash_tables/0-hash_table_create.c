#include "hash_tables.h"
/**
 * hash_table_create - Write a function that creates a hash table.
 * @size: The size of the array
 * Return:(ht)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;

	ht->array = malloc(sizeof(hash_table_t *) * size);
	if (ht == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
