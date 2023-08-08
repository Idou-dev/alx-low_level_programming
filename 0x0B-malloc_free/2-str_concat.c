#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: a string
 * Return: the length of  a string
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to char
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int l1, l2, i;

	if (s1 == NULL && s2 == NULL)
	{
		s = '\0';
	}
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	s = malloc(sizeof(char) * (l1 + l2) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
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
