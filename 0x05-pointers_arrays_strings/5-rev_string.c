#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to a char
 * Return: void
 */

void rev_string(char *s)
{
	int l, i;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		s[i] = s[l - i - 1];
	}
}
