#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: first node
 * @n: an integer
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->n = n;
	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
