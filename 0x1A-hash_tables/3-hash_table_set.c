#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: pointer to hash_tables.
 * @key: is the key.
 * @value: is the value associated with the key.
 * Return: 1 if it Succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new_node = NULL, *helper = NULL;

	if (!ht || !key || !*key)
		return (idx);

	idx = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = NULL;

	if (!ht->array[idx])
		ht->array[idx] = new_node;
	else
	{
		helper = ht->array[idx];
		while (helper->next)
			helper = helper->next;
		helper->next = new_node;
	}
	return (1);
}
