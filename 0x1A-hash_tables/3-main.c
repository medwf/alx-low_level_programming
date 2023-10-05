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

    ht = hash_table_create(100);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "hetairas", "mentioner");
    hash_table_set(ht, "heliotropes", "neurospora");
    hash_table_set(ht, "stylist", "subgenera");
    hash_table_set(ht, "joyful", "joyful");
    hash_table_set(ht, "redescribed", "urites");
    hash_table_set(ht, "dram", "vivency");
    hash_table_set(ht, "betty", "change_hhh");

    while (i < 100)
    {
        if (ht->array[i])
            printf("key = %s: value == %s\n", ht->array[i]->key, ht->array[i]->value);
        i++;
    }
    return (EXIT_SUCCESS);
}