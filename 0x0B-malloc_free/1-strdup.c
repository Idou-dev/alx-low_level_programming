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

	while (str[l] != '\0')
	{
		l++;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		s = malloc(l * sizeof(char));
		for (i = 0; i < l * sizeof(char); i++)
		{
			s[i] = str[i];
		}
	}
	return (s);
}
