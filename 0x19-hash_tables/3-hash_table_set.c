#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table to add or update the key/value
 * @key: The Key
 * @value: value associated with the key
 *
 * Return: 1 if success, 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int idx = 0;

	if (ht == NULL || key == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
