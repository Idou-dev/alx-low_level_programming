#include "lists.h"

/**
 * listint_len - returns the number of elements in a
 * linked listint_t list
 * @h: pointer
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
