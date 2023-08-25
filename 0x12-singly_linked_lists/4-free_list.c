#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointr to struct
 */

void free_list(list_t *head)
{
	list_t *node = head;
	list_t *aux;

	while (node != NULL)
	{
		aux = node;
		node = node->next;
		free(aux);
	}
	head = NULL;
}
