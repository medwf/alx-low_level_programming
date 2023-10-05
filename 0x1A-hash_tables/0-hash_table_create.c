#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: The size of The array
 * Return: a pointer to the newly created table,
 *          or NULL id something wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int i;
	/* if size == 0 we dont need to create array of hash table*/
	if (size == 0)
		return (NULL);

	/* if new_table not created return NULL*/
	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);

	/* set size and create size of arrays */
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * new_table->size);

	/* initialized all pointer array to NULL*/
	for (i = 0; i < new_table->size; i++)
		new_table->array[i] = NULL;

	/* return pointer to struct table list */
	return (new_table);
}
