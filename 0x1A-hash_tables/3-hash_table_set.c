#include "hash_tables.h"

/**
 * hash_table_set - Adds or update the key/value in a hash table.
 * @ht: Pointer to the hash table.
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_item;
	char *_value;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	_value = strdup(value);
	if (_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = _value;
			return (1);
		}
	}
	new_item = malloc(sizeof(hash_node_t));
	if (new_item == NULL)
	{
		free(_value);
		return (0);
	}
	new_item->key = strdup(key);
	if (new_item->key == NULL)
	{
		free(new_item);
		return (0);
	}
	new_item->value = _value;
	new_item->next = ht->array[index];
	ht->array[index] = new_item;

	return (1);
}
