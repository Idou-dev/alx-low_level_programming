#include "lists.h"

/**
 * print_listint - returns
 * the number of elements in a linked listint_t list
 * @h: pointer to struct
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
