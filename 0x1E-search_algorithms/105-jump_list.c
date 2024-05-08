#include "search_algos.h"
#include <stdio.h>

/**
 * jump_list - searches for a value i a sorted list of integers
 *             using the Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: pointer to the firat node where value is located
 *         or NULL if value is not found or list is NUll
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size);
	listint_t *current = list, *prev = NULL;
	size_t i;

	if (list == NULL)
		return (NULL);

	while (current != NULL && current->n < value)
	(
		prev = current;
		for (i = 0; current->next != NULL && i < step; ++i)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		prev->index, current->index);

	while (prev != NULL && prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->next == NULL || prev->n == value)
			break;
		prev = prev->next;
	}
	if (prev != NLL && prev->n == value)
		return (prev);

	return (NULL);
}
