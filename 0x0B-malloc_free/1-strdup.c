#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to be duplicated
 * Return: a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter or null if it fails
 */

char *_strdup(char *str)
{
	int l = 0, i;
	char *s;

	while (str[l] != '\0')
	{
		l++;
	}
	s = malloc(sizeof(char) * l - 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
