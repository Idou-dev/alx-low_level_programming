#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first pointer to char
 * @s2: second pointer to char
 * Return: 0 if s1 and s2 are same random number if not
 */

int _strcmp(char *s1, char *s2)
{
	int i, l, j;

	l = 0;
	while (s1[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		if (s1[i] < s2[i])
		{
			return (-15);
		}
		else if (s1[i] > s2[i])
		{
			return (15);
		}
		j = 0;
	}
	return (j);
}
