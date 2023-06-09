#include "main.h"

/**
 * alloc_grid - returns a pointer to 2 dimensional array
 * @width: first integer
 * @height: second integer
 * Return: pointer to a 2D array, Null on failure, or width or height is 0
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(height * sizeof(int *));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(s[j]);
			}
			free(s);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
