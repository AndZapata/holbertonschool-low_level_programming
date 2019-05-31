#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int i;
	unsigned long int idx = 0;

	for (i = 0; key[i]; i++)
		idx = hash_djb2(key) % size;
	return (idx);
}
