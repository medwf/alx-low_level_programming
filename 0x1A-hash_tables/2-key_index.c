#include "hash_tables.h"

/**
 * key_index -  a function that gives you the index of a key.
 * @key: is the key.
 * @size: is the size of the array of hash table
 * Return:  the index at which the key/value pair
 *      should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index = 0;

	if (!size || !key || !*key)
		return (key_index);

	key_index = hash_djb2(key);
	key_index %= size;
	return (key_index);
}
