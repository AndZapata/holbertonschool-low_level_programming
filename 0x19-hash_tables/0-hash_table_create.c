#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table
 * @size: Size of the array
 *
 * Return: returns a pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	new->size = size;

	return (new);
}
