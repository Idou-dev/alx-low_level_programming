#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * of a listint_t linked list
 * @head: first node
 * @index: index of node
 * Return: nth node of a listint_t list or NULL
 * if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *node;

	node = head;
	while (node && n < index)
	{
		node = node->next;
		n++;
	}
	return (node);
}
