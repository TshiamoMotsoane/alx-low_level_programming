#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: A pointer to a hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *ht_item = ht;
	hash_node_t *current, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				temp = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = temp;
			}
		}
	}
	free(ht_item->array);
	free(ht_item);
}
