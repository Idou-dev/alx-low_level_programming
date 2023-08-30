#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: the head of listint_t
 * Return: the head node’s data or 0 if it's empty
 */

int pop_listint(listint_t **head)
{
	listint_t *to_delete;

	if (*head == NULL)
		return (0);
	to_delete = *head;
	*head = (*head)->next;
	free(to_delete);
	return (to_delete->n);
}
