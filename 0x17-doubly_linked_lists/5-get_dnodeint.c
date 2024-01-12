#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @index: the index of the head of the list.
 * @head: pointer to the head of the list.
 *
 * Return: nth node dlistint_t linked list, or NULL if it doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
