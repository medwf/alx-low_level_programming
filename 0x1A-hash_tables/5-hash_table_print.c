#include "hash_tables.h"

/**
 * hash_table_print -  a function that prints a hash table.
 * @ht: is the pointer to hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, comma = 0;
	hash_node_t *print = NULL;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;

		print = ht->array[i];
		if (!print->next)
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", print->key, print->value);
			comma = 1;
		}
		else
		{
			while (print)
			{
				if (comma)
					printf(", ");
				printf("'%s': '%s'", print->key, print->value);
				comma = 1;
				print = print->next;
			}
		}
	}
	printf("}\n");
}
