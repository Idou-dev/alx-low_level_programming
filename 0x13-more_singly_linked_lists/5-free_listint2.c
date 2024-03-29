#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: first node
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;
	listint_t *aux;

	if (!head)
		return;
	curr = *head;
	while (curr != NULL)
	{
		aux = curr;
		curr = curr->next;
		free(aux);
	}
	*head = NULL;
}
