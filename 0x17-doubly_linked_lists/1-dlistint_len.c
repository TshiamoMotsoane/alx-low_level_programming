#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
