#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: a pointer to an int
 * @b: second pointer to an int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;

	*a = j;
	*b = i;
}
