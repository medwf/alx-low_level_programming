#include "hash_tables.h"

/**
 * hash_table_get -  a function that retrieves a value associated with a key
 * @ht: is the hash table.
 * @key: id the key you are looking for.
 * Return: the value associated with the element,
 *      or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *tmp = NULL;

	if (!ht || !key || !*key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (strncmp(key, tmp->key, strlen(tmp->key) + 1) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
