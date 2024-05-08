#include "../search_algos.h"
#include <stdio.h>

/**
 * print_list -  prints the content of a listint_t
 * @list: pointer to the head of the list
 */
void print_list(const lisint_t *list)
{
	printf("List :\n");
	while (list)
	{
		printf("Index[%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}
	printf("\n");
}
