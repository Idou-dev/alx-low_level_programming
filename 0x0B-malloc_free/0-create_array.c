#include "main.h"

/**
 * create_array - creates an array of chars, and initialize it whit c
 * @size: size of array
 * @c: character to fill array with
 * Return: pointer to the array or Null if it fails or size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeof(char) * size; i++)
	{
		s[i] = c;
	}
	return (s);

}
