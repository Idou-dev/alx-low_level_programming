#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *	with copy of str
 * @str: the string to copy
 * Return: pointer to the duplicated string, NULL if str is Null
 */

char *_strdup(char *str)
{
	unsigned int i, l = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[l] != '\0')
	{
		l++;
	}
	s = malloc(l * sizeof(char) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= l * sizeof(char); i++)
	{
		s[i] = str[i];
	}
	return (s);
}
