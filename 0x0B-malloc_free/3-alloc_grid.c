#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: whidth of the array
 * @height: height of the array
 * Return: a pointer to a 2 dimensional array of integers or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width == 0 || height == 0)
		return (NULL);
	arr = malloc(sizeof(int) * width);
	for (i = 0; i < width; i++)
		arr[i] = malloc(sizeof(int) * width);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
