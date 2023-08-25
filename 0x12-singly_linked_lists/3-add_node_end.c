#include "lists.h"
#include <stdlib.h>
#include <string.h>

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *curr = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL || head == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = _strlen(new_node->str);
	}
	if (curr != NULL)
	{
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
