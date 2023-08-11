#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: the length of a s
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: unsigned integer
 * Return: pointer string or Null if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i, j, k = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (n >= l2)
		j = l1 + l2;
	else
		j = l1 + n;
	s = malloc(sizeof(char) * j + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		if (i <= l1)
		{
			s[i] = s1[i];
		}
		if (i >= l1)
		{
			s[i] = s2[k];
			k++;
		}
	}
	s[j] = '\0';
	return (s);
}
