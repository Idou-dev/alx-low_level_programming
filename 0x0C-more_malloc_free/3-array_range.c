#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first int
 * @max: second int
 * Return: pointer to the newly created array or NULL if it fails
 */

int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		p[i] = min++;
	return (p);
}
