#include "../search_algos.h"
#include <stdlib.h>

/**
 * free_list - deallocates a singly linked list
 * @list: pointer to the linked list to be freed
 */
void free_list(listint_t *list)
{
	listint_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_list(node);
	}
}
