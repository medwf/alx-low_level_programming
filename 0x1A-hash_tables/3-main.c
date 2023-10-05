#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    unsigned long int i = 0;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    while (i < 1024)
    {
        if (ht->array[i])
            printf("key = %s == value == %s\n", ht->array[i]->key, ht->array[i]->value);
        i++;
    }
    return (EXIT_SUCCESS);
}