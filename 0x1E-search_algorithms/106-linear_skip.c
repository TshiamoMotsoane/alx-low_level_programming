#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip to search in
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located, or NULL
 *         if value is not found or list is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (list == NULL)
		return (NULL);

	current = list;
	while (current != NULL && current->n < value)
	{
		express = current->express;
		if (express == NULL)
		{
			while (current->next != NULL)
				current = current->next;
			break;
		}
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
		if (express->n >= value)
			break;

		current =  express;
	}
	printf("Value found between indexs [%lu] = [%lu]\n",
			current->index, current->index);
	while (current != NULL && current->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->next == NULL || current->n ==  value)
			break;
		current = current->next;
	}
	if (current != NULL && current->n == value)
		return (current);

	return (NULL);
}
