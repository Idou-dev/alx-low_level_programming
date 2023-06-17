#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: an integer
 * Return: pointer to newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, l1 = 0, l2 = 0;

	if (s1 == NULL && s2 == NULL)
		s = '\0';
	if (s1 != NULL)
	{
		while (s1[l1] != '\0')
			l1++;
	}
	if (s2 != NULL)
	{
		while (s2[l2] != '\0')
			l2++;
	}
	if (n < l2)
		s = malloc((l1 + n) * sizeof(char) + 1);
	if (n >= l2)
		s = malloc((l1 + l2) * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; i < l1; i++)
			s[i] = s1[i];
	}
	if (s2 != NULL)
	{
		if (n >= l2)
		{
			for (i = 0; i <= l2; i++)
				s[l1 + i] = s2[i];
		}
		else
		{
			for (i = 0; i < n; i++)
				s[l1 + i] = s2[i];
			s[l1 + i] = '\0';
		}
	}
	return (s);
}
