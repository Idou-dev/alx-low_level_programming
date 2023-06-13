#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: string s that contains s1 and s2, Null if malloc fails
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, l1 = 0, l2 = 0;

	if (s1 == NULL && s2 == NULL)
	{
		s = '\0';
	}
	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}
	s = malloc((l1 + l2) * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i <= l2; i++)
	{
		s[l1 + i] = s2[i];
	}
	return (s);
}
