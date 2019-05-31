#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table to print
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	int flag;
	hash_node_t *temp;

	if (ht == NULL)
		return;
	flag = 0;
	putchar('{');
	for (idx = 0; idx < ht->size; idx++)
	{
		for (temp = ht->array[idx]; temp; temp = temp->next)
		{
			if (flag == 0)
				flag = 1;
			else
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
		}
	}
	printf("}\n");
}
