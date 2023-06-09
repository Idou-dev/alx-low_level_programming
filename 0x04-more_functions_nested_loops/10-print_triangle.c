#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: an integer
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = size; i > 0; i--)
	{
		for (j = i; j > 1; j--)
		{
			_putchar(' ');
		}
		for (k = 0; k < size - i + 1; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
