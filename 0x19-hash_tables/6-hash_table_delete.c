#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table to be deleted
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *temp, *aux;

	if (ht == NULL)
		return;
	for (idx = 0; idx < ht->size; idx++)
	{
		for (temp = ht->array[idx]; temp; )
		{
			aux = temp;
			temp = temp->next;
			free(aux->value);
			free(aux->key);
			free(aux);
		}
	}
	free(ht->array);
	free(ht);
}
