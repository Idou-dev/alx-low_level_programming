#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: pointer to int
 * @n: number of element of a
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = n - 1; i >= n / 2; i--)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
