#include "hash_tables.h"

/**
 * key_index - Calculates the index at which a given key/value pair,
 * should be stored in the array of the hash table
 * @key: The key to calculate the index
 * @size: The size of the array of the hash table
 *
 * Return: The index of the key.
 * Description: Uses the djb2 funtion.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
