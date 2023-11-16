#include "lists.h"
#include <stdio.h>

/**
 * list_len - Returns the number of elements in a list_t list.
 * @h: Pointer to the start of nodes in the list *h
 *
 * Return: The number of nodes in the list.
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
