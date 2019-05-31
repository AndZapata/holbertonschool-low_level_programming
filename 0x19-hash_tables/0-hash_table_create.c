#include "hash_tables.h"

/**
 * _memset - copy a memory set of constant bytes
 * @s: address of the string
 * @b: constant value
 * @n: value to fill
 *
 * Return: Nothing.
 */
void *_memset(void *s, int b, unsigned int n)
{
	unsigned char *len = s;

	for (; n > 0; n--)
	{
		*len = b;
		len++;
	}
	return (s);
}

/**
 * hash_table_create - Function that creates a hash table
 * @size: Size of the array
 *
 * Return: returns a pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size == 0)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->array = (hash_node_t **)malloc(size * sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	_memset(new->array, 0, sizeof(new));
	new->size = size;

	return (new);
}
