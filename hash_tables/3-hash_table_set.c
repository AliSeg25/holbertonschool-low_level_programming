#include "hash_tables.h"
/**
 * hash_table_set - Write a function that adds an element to the hash table.
 * @ht: Is the hash table to add or update the key/valu.
 * @key: Is the key.
 * @value: Is the value associated.
 * Return: (1) it succeeded else (0).
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/*hash_table_t *new;new allocated square new value*/
	char *copy_value;/*variable copy value*/
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy_value = strdup(value);/*we copy value*/
	if (copy_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size)
		;/*We recover the index of the key*/

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)/*check good key*/
		{
			free(ht->array[i]->value);/*Remove value back new*/
			ht->array[i]->value = copy_value;
			return (1);/*if its working*/
		}
	}
	return (1);
}
