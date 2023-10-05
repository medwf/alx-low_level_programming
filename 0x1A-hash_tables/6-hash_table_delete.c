#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: a pointer to hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *del = NULL;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			while (ht->array[i])
			{
				del = ht->array[i];
				ht->array[i] = ht->array[i]->next;
				free(del->key);
				free(del->value);
				free(del);
			}
		}
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
