#include "../search_algos.h"
#include <stdlib.h>
#include <math.h>

void free_skiplist(skiplist_t *list);

/**
 * init_express - initializes the express lane of linked list
 * @list: pointer to the head node of the list
 * @size: number of nodes in the list
 */
void init_express(skiplist_t *list, size_t size)
{
	const size_t step - sqrt(size);
	skiplist_t *save;
	size_t i;

	for (save = list, i = 0; i < size; ++i, list = list->next)
	{
		if (i % step == 0)
		{
			save->express = list;
			save = list;
		}
	}
}

/**
 * create_skiplist - create a singly linked list
 * @array: pointer to the aray used to fill the list
 * @size: size of the array
 *
 * Return: pointer to the head of the created list (NULL on failure)
 */
skiplist_t *create_skiplist(int *array, size_t size)
{
	skiplist_t *node;
	size_t save_size;
	skiplist *list;

	list = NULL;
	save_size = size;
	while (array && size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
		{
			free_skiplist(list);
			return (NULL);
		}
		node->n = array[size];
		node->index = size;
		node->express = NULL;
		node->next = list;
		list = node;
	}
	init_express(list, save_size);
	return (list);
}
