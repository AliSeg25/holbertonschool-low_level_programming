#include "hash_table"
/**
 * key_index - Write a function that gives you the index of a key.
 * @key: Is the key.
 * @size: size of the array of the hash table.
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
