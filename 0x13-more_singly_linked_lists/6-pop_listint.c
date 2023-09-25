#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t list,
 * returns the head node's data (n)
 * @head: double pointer to the start of the list
 * Return: head node's data 9n) if linked list is not empty; otherwise, 0
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
