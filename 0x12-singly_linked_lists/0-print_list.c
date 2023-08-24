#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list
 * @h: pointer to structer
 * Return: number of nudes
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
