#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - returns the length of str
 * @str: a string
 * Return: the length of str
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len])
	{
		len++;
	}
	return (len);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to struct
 * @str: string to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
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
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
